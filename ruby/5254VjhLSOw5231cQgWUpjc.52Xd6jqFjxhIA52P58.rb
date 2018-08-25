
        
                private
    
    require 'action_view/helpers/tags/placeholderable'
    
          # Compute details hash and key according to user options (e.g. passed from #render).
      def detail_args_for(options) # :doc:
        return @details, details_key if options.empty? # most common path.
        user_details = @details.merge(options)
    
        def find_file(path, prefixes = [], *args)
      _find_all(path, prefixes, args, true).first || raise(MissingTemplate.new(self, path, prefixes, *args))
    end
    
    # The * turns the array into a parameter list
# This is using the form of exec which takes a variable parameter list, e.g. `exec(command, param1, param2, ...)`
# We need to use that, because otherwise invocations like
# `spaceauth -u user@fastlane.tools` would recognize '-u user@fastlane.tools' as a single parameter and throw errors
exec(*exec_arr)

    
        context 'mixed' do
      let(:keywords) { 'One,Two, Three, Four Token,Or\nNewlines\r\nEverywhere' }
    
      it 'requires a URL or file uplaod' do
    visit new_scenario_imports_path
    click_on 'Start Import'
    expect(page).to have_text('Please provide either a Scenario JSON File or a Public Scenario URL.')
  end
    
          it 'does not load workers specified in the :except option' do
        agent_runner = AgentRunner.new(except: HuginnScheduler)
        workers = agent_runner.send(:load_workers)
        expect(workers.keys).to eq(['DelayedJobWorker'])
    
        @agent1 = Agents::SchedulerAgent.new(name: 'Scheduler 1', options: { action: 'run', schedule: '*/1 * * * * *' }).tap { |a|
      a.user = users(:bob)
      a.save!
    }
    @agent2 = Agents::SchedulerAgent.new(name: 'Scheduler 2', options: { action: 'run', schedule: '*/1 * * * * *' }).tap { |a|
      a.user = users(:bob)
      a.save!
    }
  end
    
        it 'should ignore strings which just contain a JSONPath' do
      expect(LiquidMigrator.convert_string('$.data')).to eq('$.data')
      expect(LiquidMigrator.convert_string('$first_title')).to eq('$first_title')
      expect(LiquidMigrator.convert_string(' $.data', true)).to eq(' $.data')
      expect(LiquidMigrator.convert_string('lorem $.data', true)).to eq('lorem $.data')
    end
    it 'should raise an exception when encountering complex JSONPaths' do
      expect { LiquidMigrator.convert_string('$.data.test.*', true) }.
        to raise_error('JSONPath '$.data.test.*' is too complex, please check your migration.')
    end
  end
    
      it 'ignores invalid values' do
    location2 = Location.new(
      lat: 2,
      lng: 3,
      radius: -1,
      speed: -1,
      course: -1)
    expect(location2.radius).to be_nil
    expect(location2.speed).to be_nil
    expect(location2.course).to be_nil
  end
    
      describe '#value_at' do
    it 'returns the value at a JSON path' do
      expect(Utils.value_at({ :foo => { :bar => :baz }}.to_json, 'foo.bar')).to eq('baz')
      expect(Utils.value_at({ :foo => { :bar => { :bing => 2 } }}, 'foo.bar.bing')).to eq(2)
      expect(Utils.value_at({ :foo => { :bar => { :bing => 2 } }}, 'foo.bar[?(@.bing == 2)].bing')).to eq(2)
    end
    
      let :valid_options do
    {
      'name' => 'XKCD',
      'expected_update_period_in_days' => '2',
      'type' => 'html',
      'url' => '{{ url | default: 'http://xkcd.com/' }}',
      'mode' => 'on_change',
      'extract' => old_extract,
      'template' => old_template
    }
  end
    
      # GET /resource/confirmation?confirmation_token=abcdef
  def show
    self.resource = resource_class.confirm_by_token(params[:confirmation_token])
    yield resource if block_given?
    
      # PUT /resource/password
  def update
    self.resource = resource_class.reset_password_by_token(resource_params)
    yield resource if block_given?
    
        if options[:model]
      path = (options[:model] == true ? 'devise/models/#{module_name}' : options[:model])
      camelized = ActiveSupport::Inflector.camelize(module_name.to_s)
      Devise::Models.send(:autoload, camelized.to_sym, path)
    end
    
              class_eval <<-METHODS, __FILE__, __LINE__ + 1
            def authenticate_#{group_name}!(favourite=nil, opts={})
              unless #{group_name}_signed_in?
                mappings = #{mappings}
                mappings.unshift mappings.delete(favourite.to_sym) if favourite
                mappings.each do |mapping|
                  opts[:scope] = mapping
                  warden.authenticate!(opts) if !devise_controller? || opts.delete(:force)
                end
              end
            end
    
                  define_method method do |resource_or_scope, *args|
                scope = Devise::Mapping.find_scope!(resource_or_scope)
                router_name = Devise.mappings[scope].router_name
                context = router_name ? send(router_name) : _devise_route_context
                context.send('#{action}#{scope}_#{module_name}_#{path_or_url}', *args)
              end
            end
          end
        end
      end
    
              # Register a new config class only if a name was given.
          if name != UNSET_VALUE
            data[:config].register(name.to_sym, &block)
    
            # This is the method called to 'prepare' the provisioner. This is called
        # before any actions are run by the action runner (see {Vagrant::Actions::Runner}).
        # This can be used to setup shared folders, forward ports, etc. Whatever is
        # necessary on a 'meta' level.
        #
        # No return value is expected.
        def prepare
        end
    
            # This contains all the push implementations by name.
        #
        # @return [Registry<Symbol, Array<Class, Hash>>]
        attr_reader :pushes
    
              # Set all of our instance variables on the new class
          [self, other].each do |obj|
            obj.instance_variables.each do |key|
              # Ignore keys that start with a double underscore. This allows
              # configuration classes to still hold around internal state
              # that isn't propagated.
              if !key.to_s.start_with?('@__')
                # Don't set the value if it is the unset value, either.
                value = obj.instance_variable_get(key)
                result.instance_variable_set(key, value) if value != UNSET_VALUE
              end
            end
          end
    
      private
    
      def page_requested?
    params[:page] == 'true'
  end
    
          if emoji.save
        log_action :create, emoji
        flash[:notice] = I18n.t('admin.custom_emojis.copied_msg')
      else
        flash[:alert] = I18n.t('admin.custom_emojis.copy_failed_msg')
      end
    
    module Admin
  class InstancesController < BaseController
    def index
      authorize :instance, :index?
      @instances = ordered_instances
    end
    
          it 'detects closing brace on separate line from last element' do
        inspect_source(source)
    
        it 'accepts def for' do
      expect_no_offenses('def for; end')
    end
  end
    
    desc 'Benchmark a cop on given source file/dir'
task :bench_cop, %i[cop srcpath times] do |_task, args|
  require 'benchmark'
  require 'rubocop'
  include RuboCop
  include RuboCop::Formatter::TextUtil
    
    module RuboCop
  module AST
    # A node extension for `for` nodes. This will be used in place of a plain
    # node when the builder constructs the AST, making its methods available
    # to all `for` nodes within RuboCop.
    class ForNode < Node
      # Returns the keyword of the `for` statement as a string.
      #
      # @return [String] the keyword of the `until` statement
      def keyword
        'for'
      end