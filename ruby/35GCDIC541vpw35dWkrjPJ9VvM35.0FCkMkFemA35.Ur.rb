
        
            def url
      @url ||= URL.parse request.base_url
    end
    
            css('.note h3', '.warning h3').each do |node|
          node.before('<p><strong>#{node.inner_html}</strong></p>').remove
        end
    
      end
end

    
          def remove(klass)
        entries.delete_if { |entry| entry.klass == klass }
      end
    
            middlewares.each {|middleware, block| use(*middleware, &block) }
    
        def _erb(file, locals)
      locals.each {|k, v| define_singleton_method(k){ v } unless (singleton_methods.include? k)} if locals
    
    When /^(?:|I )select '([^']*)' from '([^']*)'$/ do |value, field|
  select(value, :from => field)
end
    
      def framework_major_version
    framework_version.split('.').first.to_i
  end
end
World(RailsCommandHelpers)

    
        def self.register(klass, attachment_name, attachment_options)
      instance.register(klass, attachment_name, attachment_options)
    end
    
        # Returns the smaller of the two dimensions
    def smaller
      [height, width].min
    end