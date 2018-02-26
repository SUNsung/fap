
        
          def tumblr_oauth_token_secret
    service.secret
  end
    
      def load_event
    @event = current_user.events.find(params[:id])
  end
end

    
        respond_to do |format|
      if !running? && @job.destroy
        format.html { redirect_to jobs_path, notice: 'Job deleted.' }
        format.json { head :no_content }
      else
        format.html { redirect_to jobs_path, alert: 'Can not delete a running job.' }
        format.json { render json: @job.errors, status: :unprocessable_entity }
      end
    end
  end
    
    def check_link(uri)
  HTTParty.head(uri, :verify => false).code.to_i.tap do |status|
    if (400..422).include?(status)
      if status != 403 && !uri.exclude?('udemy.com')
        raise 'Request had status #{status}'
      else
        putc('S')
      end
    end
  end
end
    
      if ARGV.include? '--no-ansi'
    STDERR.puts <<-DOC
    WARNING: CocoaPods requires your terminal to be using UTF-8 encoding.
    Consider adding the following to ~/.profile:
    
            def run
          UI.puts('$CACHE_ROOT: #{@cache.root}') if @short_output
          if @pod_name.nil? # Print all
            @cache.cache_descriptors_per_pod.each do |pod_name, cache_descriptors|
              print_pod_cache_infos(pod_name, cache_descriptors)
            end
          else # Print only for the requested pod
            cache_descriptors = @cache.cache_descriptors_per_pod[@pod_name]
            if cache_descriptors.nil?
              UI.notice('No cache for pod named #{@pod_name} found')
            else
              print_pod_cache_infos(@pod_name, cache_descriptors)
            end
          end
        end
    
            def run
          print_version
          signal_end_of_output
          listen
        end
    
            # Checks if a template URL is given else returns the TEMPLATE_REPO URL
        #
        # @return String
        #
        def template_repo_url
          @template_url || TEMPLATE_REPO
        end
      end
    end
  end
end

    
          def call(env)
        unless accepts? env
          instrument env
          result = react env
        end
        result or app.call(env)
      end
    
          post('/', {}, 'HTTP_REFERER' => 'http://example.com/foo', 'HTTP_HOST' => 'example.org')
      expect(last_response).to be_ok
    end
  end
end

    
    module Jekyll
    
      # Improved version of Liquid's truncatewords:
  # - Uses typographically correct ellipsis (…) insted of '...'
  def truncatewords(input, length)
    truncate = input.split(' ')
    if truncate.length > length
      truncate[0..length-1].join(' ').strip + ' &hellip;'
    else
      input
    end
  end
    
          unless file.file?
        return 'File #{file} could not be found'
      end