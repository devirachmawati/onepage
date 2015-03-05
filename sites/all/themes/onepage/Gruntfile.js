module.exports = function(grunt){
  grunt.initConfig({
    pkg : grunt.file.readJSON('package.json'),
    watch : {
      src: {
        files : ['**/*.scss', '**/*.php'],
        tasks : ['compass:dev']
      },
      options: {
        livereload : true,
      },
    },
    compass:{
      dev:{
        options:{
          sassDir: 'custom-sass',
          imagesDir: 'images',
          cssDir: 'css',
          relativeAssets: false,
        }
      }
    }
  });
  grunt.loadNpmTasks('grunt-contrib-compass');
  grunt.loadNpmTasks('grunt-contrib-sass');
  grunt.loadNpmTasks('grunt-contrib-watch');
};
