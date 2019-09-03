
        
        def custom_release_header_anchors(markdown)
  header_regexp = %r!^(\d{1,2})\.(\d{1,2})\.(\d{1,2}) \/ \d{4}-\d{2}-\d{2}!
  section_regexp = %r!^### \w+ \w+$!
  markdown.split(%r!^##\s!).map do |release_notes|
    _, major, minor, patch = *release_notes.match(header_regexp)
    release_notes
      .gsub(header_regexp, '\\0\n{: #v\\1-\\2-\\3}')
      .gsub(section_regexp) { |section| '#{section}\n{: ##{slugify(section)}-v#{major}-#{minor}-#{patch}}' }
  end.join('\n## ')
end
    
    Benchmark.ips do |x|
  x.report('local-require') { local_require }
  x.report('global-require') { global_require }
  x.report('graceful-require') { graceful_require }
  x.compare!
end

    
            def running?
          EM.reactor_running?
        end
    
        GLOBAL_TEMPLATE_TYPES.each do |template_type, properties|
      gitlab_version = properties[:gitlab_version]
    
    module Gitlab
  module CryptoHelper
    extend self
    
    module OmniAuth
  module Strategies
    class Jwt
      ClaimInvalid = Class.new(StandardError)
    
          subject.diff_files
    end
    
            if @type
          @type = @type.to_sym
        end
      end
    
    # Load in helpers
require 'unit/support/dummy_communicator'
require 'unit/support/dummy_provider'
require 'unit/support/shared/base_context'
require 'unit/support/shared/action_synced_folders_context'
require 'unit/support/shared/capability_helpers_context'
require 'unit/support/shared/plugin_command_context'
require 'unit/support/shared/virtualbox_context'
    
          environment = isolated_environment do |env|
        env.vagrantfile(<<-VF)
Vagrant.configure('2') do |config|
  config.vm.box = 'base'
end
VF
    
            # Load provider overrides
        provider_overrides = config.vm.get_provider_overrides(provider)
        if !provider_overrides.empty?
          config_key =
            '#{object_id}_vm_#{name}_#{config.vm.box}_#{provider}'.to_sym
          @loader.set(config_key, provider_overrides)
          local_keys << config_key
          config, config_warnings, config_errors = @loader.load(local_keys)
        end
    
    describe Vagrant::Vagrantfile do
  include_context 'unit'
    
        change.down do
      Notification.where(type: 'Notifications::MentionedInPost').update_all(type: 'Notifications::Mentioned')
      Mention.where(mentions_container_type: 'Comment').destroy_all
      Notification.where(type: 'Notifications::MentionedInComment').destroy_all
    end
  end
end

    
        it 'lets a user destroy their like' do
      current_user = controller.send(:current_user)
      expect(current_user).to receive(:retract).with(@like)
    
        streams.each do |stream_path, stream_class|
      describe 'a GET to #{stream_path}' do
        it 'assigns a stream of the proper class' do
          get stream_path
          expect(response).to be_success
          expect(assigns[:stream]).to be_a stream_class
        end
      end
    end
  end
    
        it 'shows the name in the error message when the command was not found' do
      e = lambda do
        Executable.execute_command('___notfound___', [], true)
      end.should.raise Informative
      e.message.should.match /___notfound___/
    end
    
          Header = Struct.new(:path, :umbrella, :private, :textual, :exclude, :size, :mtime) do
        alias_method :private?, :private
        def to_s
          [
            (:private if private?),
            (:textual if textual),
            (:umbrella if umbrella),
            (:exclude if exclude),
            'header',
            %('#{path.to_s.gsub(''', '\'')}'),
            attrs,
          ].compact.join(' ')
        end
    
            # @private
        # @return [Hash<PodVariant, String>]
        #
        def scope_by_build_type
          scope_if_necessary(group_by { |v| v.build_type.packaging }.map(&:scope_by_linkage)) do |variant|
            variant.build_type.packaging
          end
        end
    
          it 'returns scopes by platform names if they qualify' do
        variants = PodVariantSet.new([
          PodVariant.new([@root_spec], [], [], Platform.ios),
          PodVariant.new([@root_spec], [], [], Platform.osx),
        ])
        variants.scope_suffixes.values.should == %w(iOS macOS)
      end
    
          MACOS_APP_HOST_MAIN_CONTENTS = <<EOS.freeze
#import <Cocoa/Cocoa.h>
    
        # returns the formatted full price for the variant, if at least one variant price differs from product price
    def variant_full_price(variant)
      product = variant.product
      unless product.variants.active(current_currency).all? { |v| v.price == product.price }
        Spree::Money.new(variant.price, currency: current_currency).to_html
      end
    end
    
        def eligible_for_return?
      validators.all?(&:eligible_for_return?)
    end
    
              shipments_attrs = params.delete(:shipments_attributes)
    
        # Determine that a return item has already been deemed unreturned and therefore charged
    # by the fact that its exchange inventory unit has popped off to a different order
    unreturned_return_items.select! { |ri| ri.exchange_inventory_units.exists?(order_id: ri.inventory_unit.order_id) }
    
            context 'when the currency is an empty string' do
          let(:currency) { '' }
    
            def find_property
          @property = Spree::Property.accessible_by(current_ability, :show).find(params[:id])
        rescue ActiveRecord::RecordNotFound
          @property = Spree::Property.accessible_by(current_ability, :show).find_by!(name: params[:id])
        end