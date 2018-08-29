
        
            Group.refresh_automatic_groups!(:moderators)
    gu = GroupUser.find_by(user_id: moderator.id, group_id: Group::AUTO_GROUPS[:moderators])
    
      end
    
    [
 [Badge::PopularLink, 'Popular Link', BadgeType::Bronze, 50],
 [Badge::HotLink,     'Hot Link',     BadgeType::Silver, 300],
 [Badge::FamousLink,  'Famous Link',  BadgeType::Gold,   1000],
].each do |id, name, level, count|
  Badge.seed do |b|
    b.id = id
    b.name = name
    b.badge_type_id = level
    b.multiple_grant = true
    b.target_posts = true
    b.show_posts = true
    b.query = BadgeQueries.linking_badge(count)
    b.badge_grouping_id = BadgeGrouping::Posting
    b.default_badge_grouping_id = BadgeGrouping::Posting
    # don't trigger for now, its too expensive
    b.trigger = Badge::Trigger::None
    b.system = true
  end
end
    
            unless post && post.id
          puts post.errors.full_messages if post
          puts creator.errors.inspect
          raise 'Failed to create description for trust level 3 lounge!'
        end
    
        Category.transaction do
      staff.group_names = ['staff']
      unless staff.save
        puts staff.errors.full_messages
        raise 'Failed to set permissions on the Staff category!'
      end
    
      # POST /resource/confirmation
  def create
    self.resource = resource_class.send_confirmation_instructions(resource_params)
    yield resource if block_given?
    
      def passthru
    render status: 404, plain: 'Not found. Authentication passthru.'
  end
    
    1) You forgot to wrap your route inside the scope block. For example:
    
          def self.generate_helpers!(routes=nil)
        routes ||= begin
          mappings = Devise.mappings.values.map(&:used_helpers).flatten.uniq
          Devise::URL_HELPERS.slice(*mappings)
        end
    
        # This returns whether the guest is ready to work. If this returns
    # `false`, then {#detect!} should be called in order to detect the
    # guest OS.
    #
    # @return [Boolean]
    def ready?
      !!capability_host_chain
    end
  end
end

    
              # First determine the proper array of VMs.
          vms = []
          if names.length > 0
            names.each do |name|
              if pattern = name[/^\/(.+?)\/$/, 1]
                # This is a regular expression name, so we convert to a regular
                # expression and allow that sort of matching.
                regex = Regexp.new(pattern)
    
            # This is called as a last-minute hook that allows the configuration
        # object to finalize itself before it will be put into use. This is
        # a useful place to do some defaults in the case the user didn't
        # configure something or so on.
        #
        # An example of where this sort of thing is used or has been used:
        # the 'vm' configuration key uses this to make sure that at least
        # one sub-VM has been defined: the default VM.
        #
        # The configuration object is expected to mutate itself.
        def finalize!
          # Default implementation is to do nothing.
        end
    
              @registered.each do |plugin|
            plugin.components.host_capabilities.each do |host, caps|
              results[host].merge!(caps)
            end
          end
    
      def collection_presenter
    ActivityPub::CollectionPresenter.new(
      id: account_collection_url(@account, params[:id]),
      type: :ordered,
      size: @size,
      items: @statuses
    )
  end
end

    
          redirect_to admin_account_path(@account.id), notice: I18n.t('admin.accounts.change_email.changed_msg')
    end
    
        def set_email_domain_block
      @email_domain_block = EmailDomainBlock.find(params[:id])
    end
    
        head 200
  end
    
      #
  # Initializes an HTTP packet header class that inherits from a Hash base
  # class.
  #
  def initialize
    self.dcase_hash = {}
    
      #
  # The current request context.
  #
  attr_accessor :request
  #
  # Boolean that indicates whether or not the connection supports keep-alive.
  #
  attr_accessor :keepalive
  #
  # A reference to the server the client is associated with.
  #
  attr_accessor :server
    
                k3 = OpenSSL::HMAC.digest('MD5', k1, checksum)
    
              # Encodes the type
          #
          # @return [OpenSSL::ASN1::Integer]
          def encode_type(type)
            bn = OpenSSL::BN.new(type.to_s)
            int = OpenSSL::ASN1::Integer.new(bn)
    
        def read_cached_files(path, files)
      full_path = '#@cache_path/#@branch_sha/#{path}'
      contents  = {}
      if File.directory?(full_path)
        files.each do |name|
          path = '#{full_path}/#{name}'
          contents[name] = File.read(path, mode: 'rb') if File.exists?(path)
        end
      end
      contents
    end
    
    # It is very likely that we'll need these and as some of those paths will atm
# result in a I18n deprecation warning, we load those here now so that we can
# get rid of that warning.
require 'active_support/core_ext/string/strip'
require 'active_support/core_ext/string/inflections'
require 'active_support/core_ext/array/conversions'
# TODO: check what this actually does by the time we're going to add support for
# other locales.
require 'i18n'
if I18n.respond_to?(:enforce_available_locales=)
  I18n.enforce_available_locales = false
end
    
            def run
          if @pod_name.nil?
            # Note: at that point, @wipe_all is always true (thanks to `validate!`)
            # Remove all
            clear_cache
          else
            # Remove only cache for this pod
            cache_descriptors = @cache.cache_descriptors_per_pod[@pod_name]
            if cache_descriptors.nil?
              UI.notice('No cache for pod named #{@pod_name} found')
            elsif cache_descriptors.count > 1 && !@wipe_all
              # Ask which to remove
              choices = cache_descriptors.map { |c| '#{@pod_name} v#{c[:version]} (#{pod_type(c)})' }
              index = UI.choose_from_array(choices, 'Which pod cache do you want to remove?')
              remove_caches([cache_descriptors[index]])
            else
              # Remove all found cache of this pod
              remove_caches(cache_descriptors)
            end
          end
        end
    
        # also set the env LOGSTASH_HOME
    LOGSTASH_HOME = ENV['LOGSTASH_HOME'] = ::File.expand_path(::File.join(__FILE__, '..', '..', '..'))
    
      def warn_local_gems(plugins_with_path)
    puts('Update is not supported for manually defined plugins or local .gem plugin installations, skipping: #{plugins_with_path.join(', ')}')
  end