
        
                msg = ' Please append `--trace` to the `#{cmd.name}` command '
        dashes = '-' * msg.length
        Jekyll.logger.error '', dashes
        Jekyll.logger.error 'Jekyll #{Jekyll::VERSION} ', msg
        Jekyll.logger.error '', ' for any additional information or backtrace. '
        Jekyll.logger.abort_with '', dashes
      end
      # rubocop: enable RescueException
    end
  end
end

    
            def url_absolute(url)
          return true if Addressable::URI.parse(url).absolute?
          Jekyll.logger.warn 'Warning:', 'Your site URL does not seem to be absolute, '\
              'check the value of `url` in your config file.'
          false
        end
      end
    end
  end
end

    
              File.open(File.expand_path(initialized_post_name, new_blog_path), 'w') do |f|
            f.write(scaffold_post_content)
          end
    
            # Add the ability to tap file.html the same way that Nginx does on our
        # Docker images (or on GitHub Pages.) The difference is that we might end
        # up with a different preference on which comes first.
    
        def defaults_deprecate_type(old, current)
      Jekyll.logger.warn 'Defaults:', 'The '#{old}' type has become '#{current}'.'
      Jekyll.logger.warn 'Defaults:', 'Please update your front-matter defaults to use \
                        'type: #{current}'.'
    end
  end
end

    
          def title
        Utils.slugify(@obj.data['slug'], :mode => 'pretty', :cased => true) ||
          Utils.slugify(@obj.basename_without_ext, :mode => 'pretty', :cased => true)
      end
    
        def initialize(site, base_directory = nil)
      @site = site
      @base_directory = derive_base_directory(
        @site, base_directory.to_s.dup
      )
    end
    
      def tumblr
    Tumblr.configure do |config|
      config.consumer_key = tumblr_consumer_key
      config.consumer_secret = tumblr_consumer_secret
      config.oauth_token = tumblr_oauth_token
      config.oauth_token_secret = tumblr_oauth_token_secret
    end
    
    Tumblr::Client.new
  end
end
    
        respond_to do |format|
      if @user_credential.save
        format.html { redirect_to user_credentials_path, notice: 'Your credential was successfully created.' }
        format.json { render json: @user_credential, status: :created, location: @user_credential }
      else
        format.html { render action: 'new' }
        format.json { render json: @user_credential.errors, status: :unprocessable_entity }
      end
    end
  end
    
        # Returns whether `string` is a valid IP address or IP address range.
    #
    # @return [true] if valid IP address or IP address range.
    # @return [false] otherwise.
    def valid_ip_or_range?(string)
      range = Rex::Socket::RangeWalker.new(string)
      range && range.ranges && range.ranges.any?
    end
    
          config.paths['log']             = '#{Msf::Config.log_directory}/#{Rails.env}.log'
      config.paths['config/database'] = [Metasploit::Framework::Database.configurations_pathname.try(:to_path)]
    
          if(inp.attributes[ikey] =~ /^http/i)
        inp[ikey] = ''
        next
      end
    
    #certCN cannot contain commas
certCN 		= 'Metasploit Inc.'
#keytoolOpts 	= '-genkey -alias signFiles -keystore msfkeystore ' +
#		  '-storepass msfstorepass -dname \'cn=#{certCN}\' ' +
#		  '-keypass msfkeypass'
    
      private
    
      def file_fetch(url, sha1, target)
    filename = File.basename( URI(url).path )
    output = '#{target}/#{filename}'
    begin
      actual_sha1 = file_sha1(output)
      if actual_sha1 != sha1
        fetch(url, sha1, output)
      end
    rescue Errno::ENOENT
      fetch(url, sha1, output)
    end
    return output
  end