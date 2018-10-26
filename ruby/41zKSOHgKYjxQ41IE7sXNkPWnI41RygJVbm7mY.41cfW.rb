
        
          # True if a {Formula} is being built universally.
  # e.g. on newer Intel Macs this means a combined x86_64/x86 binary/library.
  # <pre>args << '--universal-binary' if build.universal?</pre>
  def universal?
    include?('universal') && option_defined?('universal')
  end
    
      private
    
        puts 'Your system is ready to brew.' unless Homebrew.failed?
  end
end

    
        it 'allows to delete a user' do
      visit admin_users_path
      find(:css, 'a[href='/admin/users/#{users(:bob).id}']').click
      expect(page).to have_text('User 'bob' was deleted.')
      expect(page).to have_no_text('bob@example.com')
    end
    
          describe '#generate_diff' do
        it 'should check if the agent requires a service' do
          agent_diffs = services_scenario_import.agent_diffs
          basecamp_agent_diff = agent_diffs[0]
          expect(basecamp_agent_diff.requires_service?).to eq(true)
        end
    
          it 'runs until stop is called' do
        mock.instance_of(Rufus::Scheduler).join
        Thread.new { while @agent_runner.instance_variable_get(:@running) != false do sleep 0.1; @agent_runner.stop end }
        @agent_runner.run
      end
    
        it 'should raise an exception when encountering complex JSONPaths' do
      @agent.options['username_path'] = '$.very.complex[*]'
      expect { LiquidMigrator.convert_all_agent_options(@agent) }.
        to raise_error('JSONPath '$.very.complex[*]' is too complex, please check your migration.')
    end
    
      it 'provides hash-style access to its properties with both symbol and string keys' do
    expect(location[:lat]).to be_a Float
    expect(location[:lat]).to eq 2.0
    expect(location['lat']).to be_a Float
    expect(location['lat']).to eq 2.0
  end
    
      describe '#recursively_interpolate_jsonpaths' do
    it 'interpolates all string values in a structure' do
      struct = {
        :int => 5,
        :string => 'this <escape $.works>',
        :array => ['<works>', 'now', '<$.there.world>'],
        :deep => {
          :string => 'hello <there.world>',
          :hello => :world
        }
      }
      data = { :there => { :world => 'WORLD' }, :works => 'should work' }
      expect(Utils.recursively_interpolate_jsonpaths(struct, data)).to eq({
        :int => 5,
        :string => 'this should+work',
        :array => ['should work', 'now', 'WORLD'],
        :deep => {
          :string => 'hello WORLD',
          :hello => :world
        }
      })
    end
  end
    
      let :new_extract do
    {
      'url' => { 'css' => '#comic img', 'value' => '@src' },
      'title' => { 'css' => '#comic img', 'value' => '@alt' },
      'hovertext' => { 'css' => '#comic img', 'value' => '@title', 'hidden' => true }
    }
  end
    
          spec['main'] =
          find_files.(File.join(Bootstrap.stylesheets_path, '_bootstrap.scss')) +
          find_files.(Bootstrap.fonts_path) +
          %w(assets/javascripts/bootstrap.js)
    
    class Converter
  extend Forwardable
  include Network
  include LessConversion
  include JsConversion
  include FontsConversion
    
        def write_cached_files(path, files)
      full_path = './#@cache_path/#@branch_sha/#{path}'
      files.each do |name, content|
        FileUtils.mkdir_p File.dirname(File.join(full_path, name))
        File.open('#{full_path}/#{name}', 'wb') { |f| f.write content }
      end
    end