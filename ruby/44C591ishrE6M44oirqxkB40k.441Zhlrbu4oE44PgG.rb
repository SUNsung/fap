
        
                def initialize(object_name, method_name, template_object, options = {})
          @object_name, @method_name = object_name.to_s.dup, method_name.to_s.dup
          @template_object = template_object
    
        # Remove directories opposite from traversal, so that a subtree with no
    # actual files gets removed correctly.
    dirs.reverse_each do |d|
      if d.children.empty?
        puts 'rmdir: #{d} (empty)' if ARGV.verbose?
        d.rmdir
      end
    end
    
      def internal_development_commands
    find_internal_commands HOMEBREW_LIBRARY_PATH/'dev-cmd'
  end
    
      def clang_build
    @clang_build ||= MacOS.clang_build_version if MacOS.has_apple_developer_tools?
  end
    
        it 'works for running jobs' do
      job.locked_at = Time.now
      job.locked_by = 'test'
      expect(status(job)).to eq('<span class='label label-info'>running</span>')
    end
    
            end
        it 'restarts dead workers' do
          stub.instance_of(HuginnScheduler).thread { OpenStruct.new(alive?: false) }
          mock.instance_of(HuginnScheduler).run!
          @agent_runner.send(:restart_dead_workers)
        end
      end
    end
  end
    
      describe 'converting escaped JSONPath strings' do
    it 'should work' do
      expect(LiquidMigrator.convert_string('Weather looks like <$.conditions> according to the forecast at <$.pretty_date.time>')).to eq(
                                    'Weather looks like {{conditions}} according to the forecast at {{pretty_date.time}}'
      )
    end
    
      describe '#value_at' do
    it 'returns the value at a JSON path' do
      expect(Utils.value_at({ :foo => { :bar => :baz }}.to_json, 'foo.bar')).to eq('baz')
      expect(Utils.value_at({ :foo => { :bar => { :bing => 2 } }}, 'foo.bar.bing')).to eq(2)
      expect(Utils.value_at({ :foo => { :bar => { :bing => 2 } }}, 'foo.bar[?(@.bing == 2)].bing')).to eq(2)
    end
    
    describe AgentLog do
  describe 'validations' do
    before do
      @log = AgentLog.new(:agent => agents(:jane_website_agent), :message => 'The agent did something', :level => 3)
      expect(@log).to be_valid
    end
    
      platform_is_not :windows do
    it 'does not expand shell variables when given multiples arguments' do
      lambda { @object.system('echo', @shell_var) }.should output_to_fd('#{@shell_var}\n')
    end
  end
    
      it 'returns the method name as symbol' do
    eval(@code, TOPLEVEL_BINDING).should equal :boom
  end
end

    
    Then /^I should see an image in the publisher$/ do
  photo_in_publisher.should be_present
end
    
      def login_page
    path_to 'the new user session page'
  end
    
        # captcha needs to be filled out, because the field is required (HTML5)
    # in test env, the captcha will always pass successfully
    fill_in('user_captcha', with: '123456')
  end
    
              If there is multiple cache for various versions of the requested pod,
          you will be asked which one to clean. Use `--all` to clean them all.
    
          def keys
        values.keys
      end