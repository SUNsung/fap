
        
        # No trailing slash
Benchmark.ips do |x|
  x.report('with body include?') { CONTENT_CONTAINING.include?('<body') }
  x.report('with body regexp')   { CONTENT_CONTAINING =~ /<\s*body/ }
  x.compare!
end

    
            @hide_this_step = false
        if exception
          if @exceptions.include?(exception)
            @hide_this_step = true
            return
          end
    
            def log_error(error)
          Jekyll.logger.error 'LiveReload experienced an error. ' \
            'Run with --trace for more information.'
          raise error
        end
      end
    end
  end
end

    
          attr_accessor :page, :layout, :content, :paginator
      attr_accessor :highlighter_prefix, :highlighter_suffix
    
            parsed_expr = parse_expression(expression)
        @context.stack do
          groups = input.group_by do |item|
            @context[variable] = item
            parsed_expr.render(@context)
          end
          grouped_array(groups)
        end
      end
    
          it 'activates an existing user' do
        users(:bob).deactivate!
        visit admin_users_path
        find(:css, 'a[href='/admin/users/#{users(:bob).id}/activate']').click
        expect(page).to have_no_text('inactive')
        users(:bob).reload
        expect(users(:bob)).to be_active
      end
    end
  end
end

    
        it 'does not send previously configured sources when the current agent does not support them' do
      select_agent_type('Website Agent scrapes')
      select2('SF Weather', from: 'Sources')
      select_agent_type('Webhook Agent')
      fill_in(:agent_name, with: 'No sources')
      click_on 'Save'
      expect(page).to have_content('No sources')
      agent = Agent.find_by(name: 'No sources')
      expect(agent.sources).to eq([])
    end
    
        it 'works for running jobs' do
      job.locked_at = Time.now
      job.locked_by = 'test'
      expect(status(job)).to eq('<span class='label label-info'>running</span>')
    end
    
        it 'creates a scenario label with the given text' do
      expect(scenario_label(scenario, 'Other')).to eq(
        '<span class='label scenario' style='color:#AAAAAA;background-color:#000000'>Other</span>'
      )
    end
  end
    
          it 'should be valid with a valid uploaded scenario' do
        subject.file = StringIO.new(valid_data)
        expect(subject).to be_valid
      end
    end
  end
    
          it 'loads only the workers specified in the :only option' do
        agent_runner = AgentRunner.new(only: HuginnScheduler)
        workers = agent_runner.send(:load_workers)
        expect(workers.keys).to eq(['HuginnScheduler'])
        agent_runner.stop
      end
    
        it 'outputs control links to agents within the incoming set, but not outside it' do
      agents(:jane_rain_notifier_agent).control_targets = [agents(:jane_weather_agent), agents(:jane_basecamp_agent)]
      agents(:jane_rain_notifier_agent).save!
    
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
    
    describe Agents::BoxcarAgent do
  before(:each) do
  @valid_params = {
                    'user_credentials' => 'access_token',
                    'title' => 'Sample Title',
                    'body' => 'Sample Body'
                  }
  @checker = Agents::BoxcarAgent.new(:name => 'boxcartest', :options => @valid_params)
  @checker.user = users(:bob)
  @checker.save!
    
      add_filter %r{^/build.rb$}
  add_filter %r{^/config.rb$}
  add_filter %r{^/constants.rb$}
  add_filter %r{^/postinstall.rb$}
  add_filter %r{^/test.rb$}
  add_filter %r{^/compat/}
  add_filter %r{^/dev-cmd/tests.rb$}
  add_filter %r{^/test/}
  add_filter %r{^/vendor/}
    
      # The test environment is used exclusively to run your application's
  # test suite. You never need to work with it otherwise. Remember that
  # your test database is 'scratch space' for the test suite and is wiped
  # and recreated between test runs. Don't rely on the data there!
  config.cache_classes = true
    
    class NodeMincerTest < Minitest::Test
  DUMMY_PATH = 'test/dummy_node_mincer'
    
      config.vm.provision :puppet do |puppet|
    puppet.manifests_path = 'test'
    puppet.manifest_file = 'vagrant.pp'
  end
end

    
          logger.fatal('Fix the above problems, and you'll be rolling packages in no time!')
      return 1
    end
    input_class = FPM::Package.types[input_type]
    output_class = FPM::Package.types[output_type]
    
      # Does this package have the given script?
  def script?(name)
    return scripts.include?(name)
  end # def script?
    
        if self.attributes[:osxpkg_payload_free?]
      args << '--nopayload'
    else
      args += ['--root', staging_path]
    end
    
      end # def input
end # class FPM::Package::PEAR

    
        # Copy 'files' from builddir to :output/files
    Find.find('files', 'manifests') do |path|
      logger.info('Copying path: #{path}')
      if File.directory?(path)
        ::Dir.mkdir(File.join(params[:output], path))
      else
        FileUtils.cp(path, File.join(params[:output], path))
      end
    end
  end # def build!
    
      # Output a tarball.
  #
  # If the output path ends predictably (like in .tar.gz) it will try to obey
  # the compression type.
  def output(output_path)
    output_check(output_path)
    
    # Use a zip as a package.
#
# This provides no metadata. Both input and output are supported.
class FPM::Package::Zip < FPM::Package