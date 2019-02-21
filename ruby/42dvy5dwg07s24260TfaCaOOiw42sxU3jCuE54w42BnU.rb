
        
                def preload_pipeline_warnings
          # This preloads the number of warnings for every pipeline, ensuring
          # that Ci::Pipeline#has_warnings? doesn't execute any additional
          # queries.
          @pipeline.number_of_warnings
        end
    
            Redis::Cache.with do |redis|
          redis.multi do |m|
            m.sadd(key, value)
            m.expire(key, timeout)
          end
        end
      end
    
            collection = with_rate_limit { octokit.public_send(method, *args) }
        next_url = octokit.last_response.rels[:next]
    
            def execute
          create_labels
        end
    
            def line_code
          diff_line = Gitlab::Diff::Parser.new.parse(diff_hunk.lines).to_a.last
    
        it 'works for running jobs' do
      job.locked_at = Time.now
      job.locked_by = 'test'
      expect(status(job)).to eq('<span class='label label-info'>running</span>')
    end
    
      describe '#style_colors' do
    it 'returns a css style-formated version of the scenario foreground and background colors' do
      expect(style_colors(scenario)).to eq('color:#AAAAAA;background-color:#000000')
    end
    
        it 'respects an environment variable that specifies a path or URL to a different scenario' do
      stub.proxy(ENV).[](anything)
      stub(ENV).[]('DEFAULT_SCENARIO_FILE') { File.join(Rails.root, 'spec', 'fixtures', 'test_default_scenario.json') }
      expect { DefaultScenarioImporter.seed(user) }.to change(user.agents, :count).by(3)
    end
    
                expect(weather_agent_diff.name.current).to eq(agents(:bob_weather_agent).name)
            expect(weather_agent_diff.name.incoming).to eq('a weather agent')
            expect(weather_agent_diff.name.updated).to eq('a new name')
            expect(weather_agent_diff.keep_events_for.current).to eq(45.days.to_i)
            expect(weather_agent_diff.keep_events_for.incoming).to eq(5.days.to_i)
            expect(weather_agent_diff.keep_events_for.updated).to eq(2.days.to_i.to_s)
          end
        end
    
        context '#load_workers' do
      before do
        AgentRunner.class_variable_set(:@@agents, [HuginnScheduler, DelayedJobWorker])
      end
    
      describe 'up' do
    it 'should update extract and template options for an existing WebsiteAgent' do
      expect(agent.options).to include('extract' => old_extract,
                                       'template' => old_template)
      ConvertWebsiteAgentTemplateForMerge.new.up
      agent.reload
      expect(agent.options).to include('extract' => new_extract,
                                       'template' => new_template)
    end
  end