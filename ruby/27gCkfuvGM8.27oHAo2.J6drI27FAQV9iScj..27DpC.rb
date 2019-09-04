
        
                subject.call(json, forwarder)
      end
    
      describe 'favourite' do
    let(:favourite) { Favourite.create!(account: sender, status: own_status) }
    let(:mail) { NotificationMailer.favourite(own_status.account, Notification.create!(account: receiver.account, activity: favourite)) }
    
    # skip over blogs that aren't found
unavailable = []
fast_forwards = [
  'Baidu Research',
  'Booking.com',
  'Fynd',
  'Graphcool',
  'LinkedIn',
  'Medallia',
  'OmniTI',
  'Paperless Post',
  'Pluralsight',
  'Prolific Interactive',
  'Quora',
  'Robert Elder Software',
  'Simple',
  'SlideShare',
  'SourceClear',
  'Viget',
  'Zalando',
  'Zapier',
  'Zynga',
  'Dave Beazley',
  'Edan Kwan',
  'Grzegorz Gajos',
  'Joe Armstrong',
  'Kai Hendry',
  'LiveOverflow'
]
    
    class SessionsController < Devise::SessionsController
  # rubocop:disable Rails/LexicallyScopedActionFilter
  before_action :authenticate_with_2fa, only: :create
  after_action :reset_authentication_token, only: :create
  before_action :reset_authentication_token, only: :destroy
  # rubocop:enable Rails/LexicallyScopedActionFilter
    
        gon.contacts = contacts_data
    
        it 'shows the name in the error message when the command was not found' do
      e = lambda do
        Executable.execute_command('___notfound___', [], true)
      end.should.raise Informative
      e.message.should.match /___notfound___/
    end
    
            # Hashes the instance by all its attributes.
        #
        # This adds support to make instances usable as Hash keys.
        #
        # @!visibility private
        attr_reader :hash
      end
    end
  end
end

    
          # @param  [Specification] spec
      #         the specification to infer the build type from
      #
      # @param  [Boolean] host_requires_frameworks
      #         whether the host target definition specified `use_frameworks!`
      #
      # @return [BuildType] the appropriate build type for the given spec,
      #         based on whether the host target definition requires frameworks.
      #
      def self.infer_from_spec(spec, host_requires_frameworks: false)
        if host_requires_frameworks
          root_spec = spec && spec.root
          if root_spec && root_spec.static_framework
            static_framework
          else
            dynamic_framework
          end
        else
          static_library
        end
      end
    
    #-----------------------------------------------------------------------------#
    
                  @target.stubs(:umbrella_header_path_to_write).returns(write_path)
              @target.stubs(:umbrella_header_path).returns(target_header_path)
              Pathname.any_instance.stubs(:mkpath)
    
          describe 'With frameworks' do
        before do
          @pod_target = fixture_pod_target('orange-framework/OrangeFramework.podspec', true, {}, [], Platform.ios, [fixture_target_definition('iOS Example')])
          @target = AggregateTarget.new(config.sandbox, true, {}, [], Platform.ios, @pod_target.target_definitions.first, config.sandbox.root.dirname, nil, nil, 'Release' => [@pod_target])
        end
    
              it 'does propagate system frameworks or system libraries from a non test specification to an aggregate target that uses static libraries' do
            target_definition = stub('target_definition', :inheritance => 'complete', :abstract? => false, :podfile => Podfile.new, :platform => Platform.ios)
            spec = stub('spec', :library_specification? => true, :spec_type => :library)
            consumer = stub('consumer',
                            :libraries => ['xml2'],
                            :frameworks => ['XCTest'],
                            :weak_frameworks => ['iAd'],
                            :spec => spec,
                           )
            file_accessor = stub('file_accessor',
                                 :spec => spec,
                                 :spec_consumer => consumer,
                                 :vendored_static_frameworks => [config.sandbox.root + 'StaticFramework.framework'],
                                 :vendored_static_libraries => [config.sandbox.root + 'StaticLibrary.a'],
                                 :vendored_dynamic_frameworks => [config.sandbox.root + 'VendoredFramework.framework'],
                                 :vendored_dynamic_libraries => [config.sandbox.root + 'VendoredDyld.dyld'],
                                )
            file_accessor.stubs(:vendored_frameworks => file_accessor.vendored_static_frameworks + file_accessor.vendored_dynamic_frameworks,
                                :vendored_dynamic_artifacts => file_accessor.vendored_dynamic_frameworks + file_accessor.vendored_dynamic_libraries,
                                :vendored_static_artifacts => file_accessor.vendored_static_frameworks + file_accessor.vendored_static_libraries)
            pod_target = stub('pod_target',
                              :file_accessors => [file_accessor],
                              :spec_consumers => [consumer],
                              :build_as_framework? => false,
                              :build_as_static_library? => true,
                              :build_as_static_framework? => false,
                              :build_as_dynamic_framework? => false,
                              :build_as_dynamic_library? => false,
                              :build_as_dynamic? => false,
                              :build_as_static? => true,
                              :dependent_targets => [],
                              :recursive_dependent_targets => [],
                              :sandbox => config.sandbox,
                              :should_build? => true,
                              :configuration_build_dir => 'CBD',
                              :include_in_build_config? => true,
                              :uses_swift? => false,
                              :build_product_path => 'BPP',
                              :product_basename => 'PodTarget',
                              :target_definitions => [target_definition],
                             )
            pod_target.stubs(:build_settings => PodTargetSettings.new(pod_target))
            aggregate_target = fixture_aggregate_target([pod_target])
            @generator = AggregateTargetSettings.new(aggregate_target, 'Release')
            @generator.other_ldflags.should == %w(-ObjC -l'PodTarget' -l'StaticLibrary' -l'VendoredDyld' -l'xml2' -framework 'StaticFramework' -framework 'VendoredFramework' -framework 'XCTest' -weak_framework 'iAd')
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
    
            def to_s(states: %i(added deleted changed unchanged))
          lines(states).join('\n')
        end
    
          def subtotal
        order.item_total * exchange_multiplier
      end
    
        def eligible_for_return?
      validators.all?(&:eligible_for_return?)
    end
    
                  if s[:shipped_at].present?
                inventory_unit.pending = false
                inventory_unit.state = 'shipped'
              end
    
      def self.check_unused_translations
    self.used_translations ||= []
    self.unused_translation_messages = []
    self.unused_translations = []
    load_translations(translations)
    translation_diff = unused_translations - used_translations
    translation_diff.each do |translation|
      Spree.unused_translation_messages << '#{translation} (#{I18n.locale})'
    end
  end
    
              it 'selects the most affordable shipping rate' do
            allow(shipping_methods[0]).to receive_message_chain(:calculator, :compute).and_return(5.00)
            allow(shipping_methods[1]).to receive_message_chain(:calculator, :compute).and_return(3.00)
    
              Spree::Dependencies.cart_add_item_service.constantize.call(order: @shipment.order,
                                                                     variant: variant,
                                                                     quantity: quantity,
                                                                     options: { shipment: @shipment })
    
      before { instance.extend Tmuxinator::WemuxSupport }
    
        def pre
      _pre = yaml['pre']
    
        initialize_with { Tmuxinator::Project.new(file) }
  end
    
      context 'hook value is Array' do
    before do
      project.yaml[hook_name] = [
        'echo 'on hook'',
        'echo 'another command here''
      ]
    end
    
    describe Tmuxinator::Pane do
  let(:klass) { described_class }
  let(:instance) { klass.new(index, project, window, *commands) }
  # let(:index) { 'vim' }
  # let(:project) { 0 }
  # let(:tab) { nil }
  # let(:commands) { nil }
  let(:index) { 0 }
  let(:project) { double }
  let(:window) { double }
  let(:commands) { ['vim', 'bash'] }
    
      describe '#pre_window' do
    subject(:pre_window) { project.pre_window }
    
      if base_index = options.fetch(:base_index) { 1 }
    standard_options << 'base-index #{base_index}'
  end
    
          it 'does not set name option' do
        expect(window.tmux_new_window_command).to eq full_command
      end
    end
  end