
        
                      accept = if current_value.respond_to?(:call)
                current_value.call(item)
              else
                Array(current_value).map(&:to_s).include?(value.to_s)
              end
    
        def assert_index(index)
      i = index.is_a?(Integer) ? index : @filters.index(filter_const(index))
      raise 'No such filter to insert: #{index}' unless i
      i
    end
  end
end

    
        def as_json
      @pages
    end
    
        def base_url
      @base_url ||= URL.parse self.class.base_url
    end
    
            private
    
          INDEX = Set.new
    
    # This is the version that ships with OS X 10.10, so be sure we test against it.
# At the same time, the 1.7.7 version won't install cleanly on Ruby > 2.2,
# so we use a fork that makes a trivial change to a macro invocation.
gem 'json', :git => 'https://github.com/segiddins/json.git', :branch => 'seg-1.7.7-ruby-2.2'
    
    module Pod
  class Command
    class Env < Command
      self.summary = 'Display pod environment'
      self.description = 'Display pod environment.'
    
      test 'clean path with double leading slash' do
    assert_equal '/Mordor', clean_path('//Mordor')
  end
end
    
      test 'transliteration' do
    # we transliterate only when adapter is grit
    return if defined?(Gollum::GIT_ADAPTER) && Gollum::GIT_ADAPTER != 'grit'
    
              def find_spree_current_order
            Spree::Api::Dependencies.storefront_current_order_finder.constantize.new.execute(
              store: spree_current_store,
              user: spree_current_user,
              token: order_token,
              currency: current_currency
            )
          end
    
                return if after_update_attributes
    
            # Takes besides the products attributes either an array of variants or
        # an array of option types.
        #
        # By submitting an array of variants the option types will be created
        # using the *name* key in options hash. e.g
        #
        #   product: {
        #     ...
        #     variants: {
        #       price: 19.99,
        #       sku: 'hey_you',
        #       options: [
        #         { name: 'size', value: 'small' },
        #         { name: 'color', value: 'black' }
        #       ]
        #     }
        #   }
        #
        # Or just pass in the option types hash:
        #
        #   product: {
        #     ...
        #     option_types: ['size', 'color']
        #   }
        #
        # By passing the shipping category name you can fetch or create that
        # shipping category on the fly. e.g.
        #
        #   product: {
        #     ...
        #     shipping_category: 'Free Shipping Items'
        #   }
        #
        def new; end
    
                result = add_store_credit_service.call(
              order: spree_current_order,
              amount: params[:amount].try(:to_f)
            )
    
          @@adjustment_attributes = [
        :id, :source_type, :source_id, :adjustable_type, :adjustable_id,
        :originator_type, :originator_id, :amount, :label, :mandatory,
        :locked, :eligible, :created_at, :updated_at
      ]
    
        build_path
    # Dont' initialize staging_path just yet, do it lazily so subclass can get a word in.
  end # def initialize
    
        temp_info = pkginfo_template_path
    
        # do channel-update if requested
    if attributes[:pear_channel_update?]
      channel = attributes[:pear_channel] || 'pear'
      logger.info('Updating the channel', :channel => channel)
      safesystem('pear', '-c', config, 'channel-update', channel)
    end
    
        attributes[:pleaserun_name] ||= File.basename(command.first)
    attributes[:prefix] ||= '/usr/share/pleaserun/#{attributes[:pleaserun_name]}'
    
        ::Dir.mkdir(File.join(builddir, 'manifests'))
    manifests.each do |manifest|
      dir = File.join(builddir, 'manifests', File.dirname(manifest))
      logger.info('manifests targeting: #{dir}')
      ::Dir.mkdir(dir) if !File.directory?(dir)
    
    # Use a zip as a package.
#
# This provides no metadata. Both input and output are supported.
class FPM::Package::Zip < FPM::Package
    
        private
    
        def tmux_new_window_command
      path = root? ? '#{Tmuxinator::Config.default_path_option} #{root}' : nil
      '#{project.tmux} new-window #{path} -t #{tmux_window_target} #{tmux_window_name_option}'
    end
    
      describe '#hook_on_project_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_start' }
    end
  end
  describe '#hook_on_project_first_start' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_first_start' }
    end
  end
  describe '#hook_on_project_restart' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_restart' }
    end
  end
  describe '#hook_on_project_exit' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_exit' }
    end
  end
  describe '#hook_on_project_stop' do
    it_should_behave_like 'a project hook' do
      let(:hook_name) { 'on_project_stop' }
    end
  end
end

    
    FactoryBot.find_definitions
    
          it { is_expected.to be false }
    end
    
        def start(name = nil, *args)
      # project-config takes precedence over a named project in the case that
      # both are provided.
      if options['project-config']
        args.unshift name if name
        name = nil
      end