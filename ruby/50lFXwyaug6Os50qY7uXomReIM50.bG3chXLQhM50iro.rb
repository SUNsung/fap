
        
        def schwartzian_transform(docs, meta_key)
  docs.collect! { |d|
    [d[meta_key], d]
  }.sort! { |apple, orange|
    if !apple[0].nil? && !orange[0].nil?
      apple.first <=> orange.first
    elsif !apple[0].nil? && orange[0].nil?
      -1
    elsif apple[0].nil? && !orange[0].nil?
      1
    else
      apple[-1] <=> orange[-1]
    end
  }.collect! { |d| d[-1] }
end
    
    #
    
            def deprecated_relative_permalinks(site)
          if site.config['relative_permalinks']
            Jekyll::Deprecator.deprecation_message 'Your site still uses relative permalinks,' \
                                                   ' which was removed in Jekyll v3.0.0.'
            true
          end
        end
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
        it 'can not be turned off' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('IMPORT_DEFAULT_SCENARIO_FOR_ALL_USERS') { 'true' }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(7)
    end
  end
end

    
        it 'should revert extract and template options for an updated WebsiteAgent' do
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
      ConvertWebsiteAgentTemplateForMerge.new.down
      agent.reload
      expect(agent.options).to include('extract' => reverted_extract,
                                       'template' => reverted_template)
    end
  end
end
