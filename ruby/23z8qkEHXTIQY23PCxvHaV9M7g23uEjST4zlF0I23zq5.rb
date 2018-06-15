
        
                if name.start_with?('etc') || name.start_with?('core.stdc.')
          name.split('.')[0..2].join('.')
        elsif name.start_with?('ddmd')
          'ddmd'
        elsif name.start_with?('rt')
          'rt'
        else
          name.split('.')[0..1].join('.')
        end
      end
    
        version '4' do
      self.release = '4.1.1'
      self.base_url = 'https://getbootstrap.com/docs/4.1/'
      self.root_path = 'getting-started/introduction/'
    
        def as_json
      { name: name, path: path, type: type }
    end
  end
end

    
        def join(*args)
      self.class.join self, *args
    end
    
        end # end of each_key
  end # end of parse
end
    
    		self.block[-1] << '    ''
    
          def initialize(pairs = {})
        @pairs = pairs
        pairs.each do |key, value|
          raise 'invalid container key: '#{key.inspect}'' unless VALID_KEYS.include?(key)
          send(:'#{key}=', value)
        end
    
      private
    
            if args.length > 0
          attachment.to_s(args.first)
        else
          attachment
        end
      end
    end
    
          class HaveAttachedFileMatcher
        def initialize attachment_name
          @attachment_name = attachment_name
        end
    
          def drop_attached_file(*args)
        ActiveSupport::Deprecation.warn 'Method `drop_attached_file` in the migration has been deprecated and will be replaced by `remove_attachment`.'
        remove_attachment(*args)
      end
    end