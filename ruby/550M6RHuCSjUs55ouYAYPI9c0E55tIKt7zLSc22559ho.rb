
        
                scope :exclude_ignored, -> do
          where('allow_failure = ? OR status IN (?)',
            false, %w[created pending running success skipped])
        end
    
              if @job.blank?
            @pipeline.coverage
          else
            @pipeline.builds
              .find_by(name: @job)
              .try(:coverage)
          end
        end
      end
    end
  end
end

    
    describe ApplicationHelper do
  describe '#icon_tag' do
    it 'returns a Glyphicon icon element' do
      icon = icon_tag('glyphicon-help')
      expect(icon).to be_html_safe
      expect(Nokogiri(icon).at('span.glyphicon.glyphicon-help')).to be_a Nokogiri::XML::Element
    end
    
        it 'has a default when the result is empty' do
      expect(AgentsExporter.new(:name => '').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => 'Ə').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => '-').filename).to eq('exported-agents.json')
      expect(AgentsExporter.new(:name => ',,').filename).to eq('exported-agents.json')
    end
  end
    
        describe '.async_receive' do
      it 'should not run disabled Agents' do
        mock(Agent).find(agents(:bob_rain_notifier_agent).id) { agents(:bob_rain_notifier_agent) }
        do_not_allow(agents(:bob_rain_notifier_agent)).receive
        agents(:bob_rain_notifier_agent).update_attribute :disabled, true
        Agent.async_receive(agents(:bob_rain_notifier_agent).id, [1, 2, 3])
      end
    end