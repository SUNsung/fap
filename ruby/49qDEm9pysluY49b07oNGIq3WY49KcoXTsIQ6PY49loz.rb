
        
              if options[:type] == :array
        options[:roles] << :completable
        class_eval <<-EOF
          def complete_#{name}
            #{options[:values]}.map { |v| {text: v, id: v} }
          end
        EOF
      end
    
          if respond_to?(:stop)
        stop
      else
        terminate_thread!
      end
    end