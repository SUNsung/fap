
        
          FileUtils.chdir('tmp/aruba/testapp/')
    
    Given /^(?:|I )am on (.+)$/ do |page_name|
  visit path_to(page_name)
end
    
        def define_setter
      name = @name
      @klass.send :define_method, '#{@name}=' do |file|
        send(name).assign(file)
      end
    end
    
        # Returns the style, or the default style if nil is supplied.
    def style attachment, style_name
      style_name || attachment.default_style
    end
  end
end
