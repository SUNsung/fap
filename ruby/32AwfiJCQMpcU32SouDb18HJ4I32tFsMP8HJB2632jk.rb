
        
        # Just a slash
Benchmark.ips do |x|
  path = '/'
  x.report('pre_pr:#{path}')    { pre_pr(path) }
  x.report('pr:#{path}')        { pr(path) }
  x.report('envygeeks:#{path}') { pr(path) }
  x.compare!
end
    
          def print_feature_element_name(feature_element)
        @io.print '\n#{feature_element.location}  Scenario: #{feature_element.name} '
        @io.flush
      end
    
        def initial_page?
      root_page? || context[:initial_paths].include?(subpath)
    end
    
        def as_json
      @pages
    end
    
          module ClassMethods
        def internal_urls
          @internal_urls
        end
    
            css('br', 'hr', '.material-icons', '.header-link', '.breadcrumb').remove
    
        def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
      private
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
        # Returns the specified or detected guest type name.
    #
    # @return [Symbol]
    def name
      capability_host_chain[0][0]
    end
    
            # This is called to upgrade this V1 config to V2. The parameter given
        # is the full V2 configuration object, so you can do anything to it
        # that you want.
        #
        # No return value is expected, modifications should be made directly
        # to the new V2 object.
        #
        # @param [V2::Root] new
        def upgrade(new)
        end
    
              # Setup the options hash
          options ||= {}
    
            # Converts this configuration object to JSON.
        def to_json(*a)
          instance_variables_hash.to_json(*a)
        end
    
              @registered.each do |plugin|
            plugin.components.provider_capabilities.each do |provider, caps|
              results[provider].merge!(caps)
            end
          end
    
            # Defines additional command line commands available by key. The key
        # becomes the subcommand, so if you register a command 'foo' then
        # 'vagrant foo' becomes available.
        #
        # @param [String] name Subcommand key.
        def self.command(name, **opts, &block)
          # Validate the name of the command
          if name.to_s !~ /^[-a-z0-9]+$/i
            raise InvalidCommandName, 'Commands can only contain letters, numbers, and hyphens'
          end
    
            # This is called early, before a machine is instantiated, to check
        # if this provider is usable. This should return true or false.
        #
        # If raise_error is true, then instead of returning false, this
        # should raise an error with a helpful message about why this
        # provider cannot be used.
        #
        # @param [Boolean] raise_error If true, raise exception if not usable.
        # @return [Boolean]
        def self.usable?(raise_error=false)
          # Return true by default for backwards compat since this was
          # introduced long after providers were being written.
          true
        end
    
        # Like #{merge} but merges into self.
    def merge!(other)
      @items.merge!(other.__internal_state[:items])
      self
    end
    
        def URIAddEncodedOctetToBuffer(octet, result, index)
      result[index] = 37; # Char code of '%'.
      index         += 1
      result[index] = @@hexCharCodeArray[octet >> 4];
      index         += 1
      result[index] = @@hexCharCodeArray[octet & 0x0F];
      index += 1
      return index;
    end
    
          def versions
        i = @versions.size + 1
        @versions.map do |v|
          i -= 1
          { :id        => v.id,
            :id7       => v.id[0..6],
            :num       => i,
            :author    => v.author.name.respond_to?(:force_encoding) ? v.author.name.force_encoding('UTF-8') : v.author.name,
            :message   => v.message.respond_to?(:force_encoding) ? v.message.force_encoding('UTF-8') : v.message,
            :date      => v.authored_date.strftime('%B %d, %Y'),
            :gravatar  => Digest::MD5.hexdigest(v.author.email.strip.downcase),
            :identicon => self._identicon_code(v.author.email),
            :date_full => v.authored_date,
            :files     => v.stats.files.map { |f,*rest|
              page_path = extract_renamed_path_destination(f)
              page_path = remove_page_extentions(page_path)
              { :file => f,
                :link => '#{page_path}/#{v.id}'
              }
            }
          }
        end
      end
    
        page2 = 'page2'
    user2 = 'user2'
    @wiki.write_page(page2, :markdown, '',
                     { :name => user2, :email => user2 });
    
      s.add_development_dependency 'rack-test', '~> 0.6.2'
  s.add_development_dependency 'shoulda', '~> 3.5.0'
  s.add_development_dependency 'minitest-reporters', '~> 0.14.16'
  s.add_development_dependency 'twitter_cldr', '~> 3.2.0'
  s.add_development_dependency 'mocha', '~> 1.1.0'
  s.add_development_dependency 'test-unit', '~> 3.1.0'
  s.add_development_dependency 'webrick', '~> 1.3.1'
    
      # Install JavaScript dependencies if using Yarn
  # system('bin/yarn')