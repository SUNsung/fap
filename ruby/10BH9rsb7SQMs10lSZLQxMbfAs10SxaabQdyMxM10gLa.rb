
        
              def get_shallow(*path)
        snapshot.metric_store.get_shallow(*path)
      end
    
          def define_deprecated_writer_for(option, opts, &block)
        define_method(option.write_method) do |value|
          self.class.logger.warn 'DEPRECATION WARNING: The flag #{option.switches} has been deprecated, please use \'--#{opts[:new_flag]}=#{opts[:new_value]}\' instead.'
          LogStash::SETTINGS.set(opts[:new_flag], opts[:new_value])
        end
      end
    end