
        
              def test_invert_drop_table
        block = Proc.new { }
        create_table = @recorder.inverse_of :drop_table, [:people_reminders, id: false], &block
        assert_equal [:create_table, [:people_reminders, id: false], block], create_table
      end
    
        toy = klass.first
    time = 3.days.ago
    toy.update_columns(updated_at: time)
    
      def test_validate_with_bang_and_context
    assert_raise(ActiveRecord::RecordInvalid) do
      WrongReply.new.validate!(:special_case)
    end
    r = WrongReply.new(title: 'Valid title', author_name: 'secret', content: 'Good')
    assert r.validate!(:special_case)
  end
    
          def ingress_name
        self.class.name.remove(/\AActionMailbox::Ingresses::/, /::InboundEmailsController\z/).underscore.to_sym
      end
    
        attr_reader :filters
    
        self.initial_paths = []
    self.options = {}
    self.stubs = {}
    
        def self.subscribe_to(notifier)
      attach_to(namespace, new, notifier)
    end
    
    RSpec.describe Api::V1::PollsController, type: :controller do
  render_views
    
      # Tell browsers whether to use the native HTML5 validations (novalidate form option).
  # These validations are enabled in SimpleForm's internal config but disabled by default
  # in this configuration, which is recommended due to some quirks from different browsers.
  # To stop SimpleForm from generating the novalidate option, enabling the HTML5 validations,
  # change this configuration to true.
  config.browser_validations = false
    
        save!
  end
    
          it 'ensures recipient is not following sender' do
        expect(recipient.following?(sender)).to be false
      end
    end
  end
end

    
    # create and write to opml file
xml = Builder::XmlMarkup.new(indent: 2)
xml.instruct! :xml, version: '1.0', encoding: 'UTF-8'
xml.tag!('opml', version: '1.0') do
  # head
  xml.tag!('head') do
    xml.title TITLE
  end
    
          def unlocked_pods
        @unlocked_pods ||= begin
          pods = []
          UI.titled_section('Analyzing dependencies') do
            pods = Installer::Analyzer.new(config.sandbox, config.podfile).
              analyze(:outdated).
              specs_by_target.values.flatten.uniq
          end
          pods
        end
      end
    
          def ==(other)
        self.class == other.class &&
            spec == other.spec &&
            used_by_non_library_targets_only? == other.used_by_non_library_targets_only?
      end
    end
  end
end

    
      autoload :AggregateTarget,           'cocoapods/target/aggregate_target'
  autoload :Command,                   'cocoapods/command'
  autoload :Deintegrator,              'cocoapods_deintegrate'
  autoload :Executable,                'cocoapods/executable'
  autoload :ExternalSources,           'cocoapods/external_sources'
  autoload :Installer,                 'cocoapods/installer'
  autoload :HooksManager,              'cocoapods/hooks_manager'
  autoload :PodTarget,                 'cocoapods/target/pod_target'
  autoload :Project,                   'cocoapods/project'
  autoload :Resolver,                  'cocoapods/resolver'
  autoload :Sandbox,                   'cocoapods/sandbox'
  autoload :Target,                    'cocoapods/target'
  autoload :Validator,                 'cocoapods/validator'
    
            # @return [Array<Platform>] The list of all platforms this project supports.
        #
        attr_reader :platforms
    
        it 'should show link to new pod guide after creation' do
      @sut.any_instance.stubs(:clone_template)
      @sut.any_instance.stubs(:configure_template)
      output = run_command('lib', 'create', 'TestPod')
      output.should.include? 'https://guides.cocoapods.org/making/making-a-cocoapod'
    end
    
            # Initialize a new instance
        #
        # @param [TargetDefinition] target_definition @see #target_definition
        # @param [Xcodeproj::Project] project @see #project
        # @param [Array<String>] project_target_uuids @see #project_target_uuids
        # @param [Hash{String=>Symbol}] build_configurations @see #build_configurations
        # @param [Platform] platform @see #platform
        # @param [Array<String>] archs @see #archs
        #
        def initialize(target_definition, project, project_target_uuids, build_configurations, platform, archs)
          @target_definition = target_definition
          @project = project
          @project_target_uuids = project_target_uuids
          @build_configurations = build_configurations
          @platform = platform
          @archs = archs
          @client_root = project.project_dir.realpath
        end
      end
    end
  end
end

    
            # @return [Hash{Source => Array<Specification>}] the specifications grouped by spec repo source.
        #
        attr_reader :specs_by_source
    
            if obj && obj.errors[method].present?
          errors = safe_join(obj.errors[method], '<br />'.html_safe)
          content_tag(:span, errors, class: 'formError')
        else
          ''
        end
      end
    
        def reset
      preferences.each do |name, _value|
        set_preference name, preference_default(name)
      end
    end
    
    module Spree
  class ReturnItem::EligibilityValidator::Default < Spree::ReturnItem::EligibilityValidator::BaseValidator
    class_attribute :permitted_eligibility_validators
    self.permitted_eligibility_validators = [
      ReturnItem::EligibilityValidator::OrderCompleted,
      ReturnItem::EligibilityValidator::TimeSincePurchase,
      ReturnItem::EligibilityValidator::RMARequired,
      ReturnItem::EligibilityValidator::InventoryShipped,
      ReturnItem::EligibilityValidator::NoReimbursements
    ]
    
      describe '#exchange_shipments' do
    it 'returns the exchange inventory unit's shipment' do
      inventory_unit = build(:inventory_unit)
      subject.exchange_inventory_units << inventory_unit
      expect(subject.exchange_shipments).to include inventory_unit.shipment
    end
  end
    
            def create
          authorize! :create, Spree::OptionValue
          @option_value = scope.new(option_value_params)
          if @option_value.save
            render :show, status: 201
          else
            invalid_resource!(@option_value)
          end
        end
    
    ENV['REDIS_URL'] ||= 'redis://localhost/15'
    
        assert_equal obj.attribute, Psych.load(Psych.dump(obj)).attribute
  end
end

    
      it 'supports custom middleware' do
    chain = Sidekiq::Middleware::Chain.new
    chain.add CustomMiddleware, 1, []
    
          assert SomeScheduledWorker.perform_in(TimeDuck.new, 'samwise')
      assert_equal 6, ss.size
    end
    
      def perform(start)
    now = Time.now.to_f
    puts 'Latency: #{now - start} sec'
  end
end