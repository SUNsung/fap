
        
              encrypted_token = Base64.decode64(value)
      Encryptor.decrypt(AES256_GCM_OPTIONS.merge(value: encrypted_token))
    end
  end
end

    
      context 'when should request diff stats' do
    it 'Repository#diff_stats is called' do
      subject = described_class.new(diffable, collection_default_args)
    
          define_method('#{virtual_attribute}=') do |value|
        chronic_duration_attributes[virtual_attribute] = value.presence || parameters[:default].presence.to_s
    
              access_requester = source.requesters.find_by!(user_id: params[:user_id])
          member = ::Members::ApproveAccessRequestService
            .new(current_user, declared_params)
            .execute(access_requester)
    
              source = find_source_if_admin(source_type)
    
          if File.symlink?(includes_dir)
        return 'Includes directory '#{includes_dir}' cannot be a symlink'
      end
    
          Dir.chdir(file_path) do
        contents = file.read
        if contents =~ /\A-{3}.+[^\A]-{3}\n(.+)/m
          contents = $1.lstrip
        end
        contents = pre_filter(contents)
        if @raw
          contents
        else
          partial = Liquid::Template.parse(contents)
          context.stack do
            partial.render(context)
          end
        end
      end
    end
  end
end
    
        def poster
      'poster='#{@poster}'' if @poster
    end
    
          if Postal.config.rabbitmq&.host.is_a?(Array)
        bunny_host = Postal.config.rabbitmq&.host
      elsif Postal.config.rabbitmq&.host.is_a?(String)
        bunny_host = [ Postal.config.rabbitmq&.host ]
      end
    
                    if result.retry
                  log '#{log_prefix} Message requeued for trying later.'
                  queued_message.retry_later(result.retry.is_a?(Fixnum) ? result.retry : nil)
                else
                  log '#{log_prefix} Message processing completed.'
                  queued_message.message.endpoint.mark_as_used
                  queued_message.destroy
                end
              else
                log '#{log_prefix} No route and/or endpoint available for processing. Hard failing.'
                queued_message.message.create_delivery('HardFail', :details => 'Message does not have a route and/or endpoint available for delivery.')
                queued_message.destroy
                next
              end
            end
    
                if qs[:after]
              begin
                options[:where][:timestamp][:greater_than] = get_time_from_string(qs[:after]).to_f
              rescue TimeUndetermined => e
                flash.now[:alert] = 'Couldn't determine time for after from '#{qs[:after]}''
              end
            end
          end
        end
      else
        session['msg_query_#{@server.id}_#{scope}'] = nil
      end
    end