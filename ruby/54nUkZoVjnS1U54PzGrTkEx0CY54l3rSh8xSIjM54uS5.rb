
        
          it 'accepts a Fixnum' do
    sleep(0).should be_close(0, 2)
  end
    
      it 'has no effect on immediate values' do
    [nil, true, false].each do |v|
      v.taint
      v.tainted?.should == false
    end
  end
    
        it 'doesn't call the processor if the condition method returns false' do
      uploader_class.process :resize => [200, 300], :if => :false?
      uploader_class.process :fancy, :if => :false?
      expect(uploader).to receive(:false?).with('test.jpg').twice.and_return(false)
      expect(uploader).not_to receive(:resize)
      expect(uploader).not_to receive(:fancy)
      uploader.process!('test.jpg')
    end
    
    Given /^that the uploader class has a version named '([^\']+)'$/ do |name|
  @klass.version(name)
end
    
          private
      def interpolate_paperclip_path(path)
        mappings.each_pair.inject(path) do |agg, pair|
          agg.gsub(':#{pair[0]}') { pair[1].call(self, self.paperclip_style).to_s }
        end
      end
    end # Paperclip
  end # Compatibility
end # CarrierWave

    
          # both 'before' and 'after' can be string when 'mount_on' option is set
      before = before.reject(&:blank?).map do |value|
        if value.is_a?(String)
          uploader = blank_uploader
          uploader.retrieve_from_store!(value)
          uploader
        else
          value
        end
      end
      after_paths = after.reject(&:blank?).map do |value|
        if value.is_a?(String)
          uploader = blank_uploader
          uploader.retrieve_from_store!(value)
          uploader
        else
          value
        end.path
      end
      before.each do |uploader|
        if uploader.remove_previously_stored_files_after_update and not after_paths.include?(uploader.path)
          uploader.remove!
        end
      end
    end
    
          class HavePermissions # :nodoc:
        def initialize(expected)
          @expected = expected
        end
    
            if options[:bootstrap]
          template 'config/initializers/simple_form_bootstrap.rb'
        elsif options[:foundation]
          template 'config/initializers/simple_form_foundation.rb'
        end
    
        def translate_error_notification
      lookups = []
      lookups << :'#{object_name}'
      lookups << :default_message
      lookups << 'Please review the problems below:'
      I18n.t(lookups.shift, scope: :'simple_form.error_notification', default: lookups)
    end
  end
end
