
        
              def test_revert_order
        block = Proc.new { |t| t.string :name }
        @recorder.instance_eval do
          create_table('apples', &block)
          revert do
            create_table('bananas', &block)
            revert do
              create_table('clementines', &block)
              create_table('dates')
            end
            create_table('elderberries')
          end
          revert do
            create_table('figs', &block)
            create_table('grapes')
          end
        end
        assert_equal [[:create_table, ['apples'], block], [:drop_table, ['elderberries'], nil],
                      [:create_table, ['clementines'], block], [:create_table, ['dates'], nil],
                      [:drop_table, ['bananas'], block], [:drop_table, ['grapes'], nil],
                      [:drop_table, ['figs'], block]], @recorder.commands
      end
    
      def test_index_in_create
    def (ActiveRecord::Base.connection).data_source_exists?(*); false; end
    
          # Install the gems to make them available locally when bundler does his local resolution
      post_install_messages = []
      pack.gems.each do |packed_gem|
        PluginManager.ui.debug('Installing, #{packed_gem.name}, version: #{packed_gem.version} file: #{packed_gem.file}')
        post_install_messages << LogStash::PluginManager::GemInstaller::install(packed_gem.file, packed_gem.plugin?)
      end
    
          it 'display a list of installed plugins' do
        result = logstash.run_command_in_path('bin/logstash-plugin list --installed')
        expect(result.stdout.split('\n').size).to be > 1
      end