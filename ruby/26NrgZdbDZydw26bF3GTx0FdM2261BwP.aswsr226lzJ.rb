
        
                  add_default_name_and_id_for_value(tag_value, name_and_id)
          options.delete('index')
          options.delete('namespace')
          options['for'] = name_and_id['id'] unless options.key?('for')
    
              def field_type
            self.class.field_type
          end
      end
    end
  end
end

    
        private
    
    UserEmail.seed do |ue|
  ue.id = -1
  ue.email = 'no_email'
  ue.primary = true
  ue.user_id = -1
end
    
          if staff.topic_id.nil?
        creator = PostCreator.new(Discourse.system_user,
          raw: I18n.t('staff_category_description'),
          title: I18n.t('category.topic_prefix', category: staff.name),
          category: staff.name,
          archetype: Archetype.default
        )
        post = creator.create
    
            def preload_stages_warnings
          # This preloads the number of warnings for every stage, ensuring
          # that Ci::Stage#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.stages.each { |stage| stage.number_of_warnings }
        end
      end
    end
  end
end

    
          # Associates the given database ID with the current object.
      #
      # database_id - The ID of the corresponding database row.
      def cache_database_id(database_id)
        Caching.write(cache_key, database_id)
      end
    
            attr_reader :attributes
    
            # Builds a new PR using a Hash that was built from a JSON payload.
        def self.from_json_hash(raw_hash)
          hash = Representation.symbolize_hash(raw_hash)
    
              @bar2 = Agents::DotBar.new(name: 'bar2').tap { |agent|
            agent.user = users(:bob)
            agent.sources << @foo
            agent.propagate_immediately = true
            agent.disabled = true
            agent.save!
          },
    
    describe JobsHelper do
  let(:job) { Delayed::Job.new }
    
                expect(weather_agent_diff.name.current).to eq(agents(:bob_weather_agent).name)
            expect(weather_agent_diff.name.incoming).to eq('a weather agent')
            expect(weather_agent_diff.name.updated).to eq('a new name')
            expect(weather_agent_diff.keep_events_for.current).to eq(45.days.to_i)
            expect(weather_agent_diff.keep_events_for.incoming).to eq(5.days.to_i)
            expect(weather_agent_diff.keep_events_for.updated).to eq(2.days.to_i.to_s)
          end
        end
    
      it 'is droppable' do
    {
      '{{location.lat}}' => '2.0',
      '{{location.latitude}}' => '2.0',
      '{{location.lng}}' => '3.0',
      '{{location.longitude}}' => '3.0',
      '{{location.latlng}}' => '2.0,3.0',
    }.each { |template, result|
      expect(Liquid::Template.parse(template).render('location' => location.to_liquid)).to eq(result),
        'expected #{template.inspect} to expand to #{result.inspect}'
    }
  end
end

    
      let :new_extract do
    {
      'url' => { 'css' => '#comic img', 'value' => '@src' },
      'title' => { 'css' => '#comic img', 'value' => '@alt' },
      'hovertext' => { 'css' => '#comic img', 'value' => '@title', 'hidden' => true }
    }
  end
    
      describe '#log_length' do
    it 'defaults to 200' do
      expect(AgentLog.log_length).to eq(200)
    end
  end
end
