
        
                # Build your Jekyll site.
        #
        # site - the Jekyll::Site instance to build
        # options - A Hash of options passed to the command
        #
        # Returns nothing.
        def build(site, options)
          t = Time.now
          source      = options['source']
          destination = options['destination']
          incremental = options['incremental']
          Jekyll.logger.info 'Source:', source
          Jekyll.logger.info 'Destination:', destination
          Jekyll.logger.info 'Incremental build:',
                             (incremental ? 'enabled' : 'disabled. Enable with --incremental')
          Jekyll.logger.info 'Generating...'
          process_site(site)
          Jekyll.logger.info '', 'done in #{(Time.now - t).round(3)} seconds.'
        end
    
              if options['blank']
            create_blank_site new_blog_path
          else
            create_site new_blog_path
          end
    
          private
    
          it 'renders HTML' do
        expect(render(options, screenshots)).to match(/<html>/)
      end
    end
    
            expect(result).to eq('/usr/local/bin/cloc --exclude-dir=test1,test2,build --by-file --xml  --out=build/cloc.xml')
      end
    
            # This returns all the registered communicators.
        #
        # @return [Hash]
        def communicators
          Registry.new.tap do |result|
            @registered.each do |plugin|
              result.merge!(plugin.communicator)
            end
          end
        end
    
            @value << new_block
      end
    end
  end
end

    
              # Verify the box exists that we want to repackage
          box = @env.boxes.find(box_name, box_provider, '= #{box_version}')
          if !box
            raise Vagrant::Errors::BoxNotFoundWithProviderAndVersion,
              name: box_name,
              provider: box_provider.to_s,
              version: box_version
          end
    
            def autocorrect(node)
          # Regexp#match can take a second argument, but this cop doesn't
          # register an offense in that case
          return unless node.first_argument.regexp_type?
    
            def on_block(node)
          on_body_of_reduce(node) do |body|
            void_next = body.each_node(:next).find do |n|
              n.children.empty? && parent_block_node(n) == node
            end
    
        status data.respond_to?(:status_code) ? data.status_code : 200
    
              def logstash_plugin_gem_spec?(spec)
            spec.metadata && spec.metadata['logstash_plugin'] == 'true'
          end
    
            #target = $LOADED_FEATURES.grep(/#{path}/).first
        #puts path
        #puts caller.map { |c| '  #{c}' }.join('\n')
        #fontsize = [10, duration * 48].max
        puts '#{duration},#{path},#{source}'
      end
      #puts caller.map { |c| ' => #{c}' }.join('\n')
    end
    
    end
