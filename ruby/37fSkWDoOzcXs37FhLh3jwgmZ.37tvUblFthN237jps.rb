
        
            def get_mixin_names(file, opts = {})
      names = get_css_selectors(file).join('\n' * 2).scan(/^\.([\w-]+)\(#{LESS_MIXIN_DEF_ARGS_RE}\)(?: when.*?)?[ ]*\{/).map(&:first).uniq.sort
      log_file_info 'mixin defs: #{names * ', '}' unless opts[:silent] || names.empty?
      names
    end
    }
    
      config.active_support.deprecation = :stderr
end

    
          spec['version'] = Bootstrap::VERSION
    
    # Single-line step scoper
When /^(.*) within (.*[^:])$/ do |step, parent|
  with_scope(parent) { When step }
end
    
        def post_process_styles(*style_args) #:nodoc:
      post_process_style(:original, styles[:original]) if styles.include?(:original) && process_style?(:original, style_args)
      styles.reject{ |name, style| name == :original }.each do |name, style|
        post_process_style(name, style) if process_style?(name, style_args)
      end
    end
    
            def has_column?
          @subject.column_names.include?('#{@attachment_name}_file_name')
        end
      end
    end
  end
end

    
            def failure_message
          '#{expected_attachment}\n'.tap do |message|
            message << accepted_types_and_failures.to_s
            message << '\n\n' if @allowed_types.present? && @rejected_types.present?
            message << rejected_types_and_failures.to_s
          end
        end