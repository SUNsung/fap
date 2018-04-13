
        
        def envygeeks(url)
  return url if url.end_with?(FORWARD_SLASH) || url == FORWARD_SLASH
    
          private
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

    
          def warnings
        @template.warnings
      end
    
        # Public: Setup the plugin search path
    #
    # Returns an Array of plugin search paths
    def plugins_path
      if site.config['plugins_dir'].eql? Jekyll::Configuration::DEFAULTS['plugins_dir']
        [site.in_source_dir(site.config['plugins_dir'])]
      else
        Array(site.config['plugins_dir']).map { |d| File.expand_path(d) }
      end
    end
    
      def preview_url
    if object.needs_redownload?
      media_proxy_url(object.id, :small)
    else
      full_asset_url(object.file.url(:small))
    end
  end
    
      def id
    ActivityPub::TagManager.instance.uri_for(object)
  end
    
      describe 'PUT #update' do
    it 'updates notifications settings' do
      user.settings['notification_emails'] = user.settings['notification_emails'].merge('follow' => false)
      user.settings['interactions'] = user.settings['interactions'].merge('must_be_follower' => true)
    
    process_args
list_login_items_for_app $app_path

    
        # Returns an array of addresses ranges
    #
    # @return [Array<String>]
    def addresses
      (boundary || '').split('\n')
    end
    
              fd.write(res)
        end
      end
      break
    rescue ::Timeout::Error
      $stderr.puts '#{prefix}#{site} timed out'
    rescue ::Interrupt
      raise $!
    rescue ::Exception => e
      $stderr.puts '#{prefix}#{site} #{e.class} #{e}'
    end
  end
    
              s[:pass] = ''
          return
        end
    
    
    
            def expected_attachment
          'Expected #{@attachment_name}:\n'
        end
    
            def failure_message
          'Attachment #{@attachment_name} should be required'
        end
    
      context 'called with two styles' do
    it 'applies to alternating sides' do
      rule = 'border-style: dotted dashed'
    
          expect('.all-buttons-focus').to have_ruleset(ruleset)
    end
  end
    
      context 'called with arguments (1, $ratio: $golden-ratio)' do
    it 'output the first value from the golden ratio scale' do
      expect('.one-golden-ratio').to have_rule('font-size: 1.618em')
    end
  end
    
      context 'called with two sizes' do
    it 'applies to alternating sides' do
      rule = 'padding: 2px 3px'
    
          expect('.position-implied-left').to have_ruleset(ruleset)
    end
  end
    
      context 'expands hover text inputs' do
    it 'finds selectors' do
      list = @inputs_list.map { |input| '#{input}:hover' }
      list = list.join(', ')
      ruleset = 'content: #{list};'