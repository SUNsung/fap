
        
            at_exit do
      exit_code = $ERROR_INFO.nil? ? 0 : $ERROR_INFO.status
      $stdout.reopen('/dev/null')
    
    @repo.async(:update_disk_usage)
    
    # Will return immediately and create a Resque job which is later
# processed.
    
        # Returns the int count of how many failures we have seen.
    def self.count(queue = nil, class_name = nil)
      backend.count(queue, class_name)
    end
    
        # Given a word with dashes, returns a camel cased version of it.
    def classify(dashed_word)
      Resque.classify(dashed_word)
    end
    
    Then /^the uploader should have the url '(.*?)'$/ do |url|
  @uploader.url.should == url
end
    
          def store_path(for_file=filename)
        path = paperclip_path
        self.filename = for_file
        path ||= File.join(*[store_dir, paperclip_style.to_s, for_file].compact)
        interpolate_paperclip_path(path)
      end
    
          ##
      # Override this method in your uploader to provide a black list of extensions which
      # are prohibited to be uploaded. Compares the file's extension case insensitive.
      # Furthermore, not only strings but Regexp are allowed as well.
      #
      # When using a Regexp in the black list, `\A` and `\z` are automatically added to
      # the Regexp expression, also case insensitive.
      #
      # === Returns
    
            with_callbacks(:process, new_file) do
          self.class.processors.each do |method, args, condition|
            if(condition)
              if condition.respond_to?(:call)
                next unless condition.call(self, :args => args, :method => method, :file => new_file)
              else
                next unless self.send(condition, new_file)
              end
            end
            self.send(method, *args)
          end
        end
      end