
        
        Benchmark.ips do |x|
  x.report('local-require') { local_require }
  x.report('global-require') { global_require }
  x.report('graceful-require') { graceful_require }
  x.compare!
end

    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
          def site
        @site_drop ||= SiteDrop.new(@obj)
      end
    
          def grouped_array(groups)
        groups.each_with_object([]) do |item, array|
          array << {
            'name'  => item.first,
            'items' => item.last,
            'size'  => item.last.size,
          }
        end
      end
    end
  end
end

    
      def translation_scope
    'devise.omniauth_callbacks'
  end
end

    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
              path
        end
      end
    
          klass.devise_modules.each do |mod|
        constant = const_get(mod.to_s.classify)
    
          module ClassMethods
        # Attempt to find a user by password reset token. If a user is found, return it
        # If a user is not found, return nil
        def with_reset_password_token(token)
          reset_password_token = Devise.token_generator.digest(self, :reset_password_token, token)
          to_adapter.find_first(reset_password_token: reset_password_token)
        end
    
      # Disable automatic flushing of the log to improve performance.
  # config.autoflush_log = false
    
      # Disable request forgery protection in test environment.
  config.action_controller.allow_forgery_protection = false
    
      def test_font_helper_with_suffix_question
    assert_match %r(url\(['']?/assets/.*eot\?.*['']?\)), @css
  end
    
          DOUBLE_SPLAT = '**'.freeze
    
          # A shorthand for getting the last argument of the node.
      # Equivalent to `arguments.last`.
      #
      # @return [Node, nil] the last argument of the node,
      #                     or `nil` if there are no arguments
      def last_argument
        arguments[-1]
      end
    
        def extra_enabled_comments_with_names(extras, names)
      each_directive do |comment, cop_names, disabled|
        next unless comment_only_line?(comment.loc.expression.line)