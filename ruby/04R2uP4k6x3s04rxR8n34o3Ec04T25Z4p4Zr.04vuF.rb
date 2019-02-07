
        
        namespace :test do
  desc 'Run the ruby tests (without sass-spec)'
  Rake::TestTask.new('ruby') do |t|
    t.libs << 'test'
    test_files = FileList[scope('test/**/*_test.rb')]
    test_files.exclude(scope('test/rails/*'))
    test_files.exclude(scope('test/plugins/*'))
    t.test_files = test_files
    t.warning = true
    t.verbose = true
  end
    
            line_num = e.sass_line + 1 - line_offset
        min = [line_num - 6, 0].max
        section = e.sass_template.rstrip.split('\n')[min...line_num + 5]
        return e.sass_backtrace_str if section.nil? || section.empty?
    
    Given /^I run a paperclip generator to add a paperclip '([^']*)' to the '([^']*)' model$/ do |attachment_name, model_name|
  step %[I successfully run `rails generate paperclip #{model_name} #{attachment_name}`]
end
    
        def define_getters
      define_instance_getter
      define_class_getter
    end
    
        # Returns the dot+extension of the file. e.g. '.jpg' for 'file.jpg'
    # If the style has a format defined, it will return the format instead
    # of the actual extension. If the extension is empty, no dot is added.
    def dotextension attachment, style_name
      ext = extension(attachment, style_name)
      ext.empty? ? ext : '.#{ext}'
    end