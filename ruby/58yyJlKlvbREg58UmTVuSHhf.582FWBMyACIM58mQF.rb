
        
                  def checked?(value)
            case value
            when TrueClass, FalseClass
              value == !!@checked_value
            when NilClass
              false
            when String
              value == @checked_value
            else
              if value.respond_to?(:include?)
                value.include?(@checked_value)
              else
                value.to_i == @checked_value.to_i
              end
            end
          end
    
        def cache_hits # :nodoc:
      @cache_hits ||= {}
    end
  end
end

    
    describe GroupUser do
    
          ENV[new_initial_revision_var] ||= ENV[old_initial_revision_var]
      ENV[new_current_revision_var] ||= ENV[old_current_revision_var]
    
    # This is the version that ships with OS X 10.10, so be sure we test against it.
# At the same time, the 1.7.7 version won't install cleanly on Ruby > 2.2,
# so we use a fork that makes a trivial change to a macro invocation.
gem 'json', :git => 'https://github.com/segiddins/json.git', :branch => 'seg-1.7.7-ruby-2.2'
    
                case platform
            when 'iOS' then self.platform :ios, '10.0'
            when 'macOS' then self.platform :macos, '10.10'
            end
    
        def any?(key)
      value = fetch(key)
      if value && value.respond_to?(:any?)
        begin
          return value.any?
        rescue ArgumentError # rubocop:disable Lint/HandleExceptions
          # Gracefully ignore values whose `any?` method doesn't accept 0 args
        end
      end
    
          def add_role(role)
        roles.add role.to_sym
        self
      end
    
          def set(key, value=nil, &block)
        @trusted_keys << key if trusted? && !@trusted_keys.include?(key)
        remember_location(key)
        values[key] = block || value
        trace_set(key)
        values[key]
      end
    
      it 'accepts post requests with masked X-CSRF-Token header' do
    post('/', {}, 'rack.session' => session, 'HTTP_X_CSRF_TOKEN' => masked_token)
    expect(last_response).to be_ok
  end
    
            def update
          @option_type = Spree::OptionType.accessible_by(current_ability, :update).find(params[:id])
          if @option_type.update_attributes(option_type_params)
            render :show
          else
            invalid_resource!(@option_type)
          end
        end
    
            def update
          authorize! params[:action], @payment
          if !@payment.editable?
            render 'update_forbidden', status: 403
          elsif @payment.update_attributes(payment_params)
            respond_with(@payment, default_template: :show)
          else
            invalid_resource!(@payment)
          end
        end