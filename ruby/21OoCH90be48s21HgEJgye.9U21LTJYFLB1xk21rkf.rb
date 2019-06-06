
        
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

    
            # Returns the instance variables as a hash of key-value pairs.
        def instance_variables_hash
          instance_variables.inject({}) do |acc, iv|
            acc[iv.to_s[1..-1]] = instance_variable_get(iv)
            acc
          end
        end
    
            # Set the name of the plugin. The moment that this is called, the
        # plugin will be registered and available. Before this is called, a
        # plugin does not exist. The name must be unique among all installed
        # plugins.
        #
        # @param [String] name Name of the plugin.
        # @return [String] The name of the plugin.
        def self.name(name=UNSET_VALUE)
          # Get or set the value first, so we have a name for logging when
          # we register.
          result = get_or_set(:name, name)
    
            # This method is expected to return a class that is used for
        # configuring the provisioner. This return value is expected to be
        # a subclass of {Config}.
        #
        # @return [Config]
        def self.config_class
        end
    
            # This contains all the push implementations by name.
        #
        # @return [Registry<Symbol, Array<Class, Hash>>]
        attr_reader :pushes
    
    module Vagrant
  module Plugin
    module V2
      # This is the base class for a configuration key defined for
      # V2. Any configuration key plugins for V2 should inherit from this
      # class.
      class Config
        # This constant represents an unset value. This is useful so it is
        # possible to know the difference between a configuration value that
        # was never set, and a value that is nil (explicitly). Best practice
        # is to initialize all variables to this value, then the {#merge}
        # method below will 'just work' in many cases.
        UNSET_VALUE = Object.new
    
              @registered.each do |plugin|
            plugin.components.guest_capabilities.each do |guest, caps|
              results[guest].merge!(caps)
            end
          end
    
            # This should return the state of the machine within this provider.
        # The state must be an instance of {MachineState}. Please read the
        # documentation of that class for more information.
        #
        # @return [MachineState]
        def state
          nil
        end
    
        def __internal_state
      {
        items: @items,
        results_cache: @results_cache
      }
    end
  end
end

    
      # :stopdoc:
  def _dispatch_0() nil end
  def _dispatch_1(a) a end
  def _dispatch_2(a, b) a end
  def _dispatch_3(a, b, c) a end
  def _dispatch_4(a, b, c, d) a end
  def _dispatch_5(a, b, c, d, e) a end
  def _dispatch_6(a, b, c, d, e, f) a end
  def _dispatch_7(a, b, c, d, e, f, g) a end
  # :startdoc:
    
    mkpieces
mkboard
$p[4] = [$p[4][0]]
$pnum = (0...$p.length).to_a
setpiece([],0)

    
      class PostToService < Base
    def perform(*_args)
      # don't post to services in cucumber
    end
  end
    
    #   Copyright (c) 2010-2011, Diaspora Inc.  This file is
#   licensed under the Affero General Public License version 3 or later.  See
#   the COPYRIGHT file.
    
        it 'supports a limit per_page parameter' do
      2.times { FactoryGirl.create(:notification, :recipient => alice, :target => @post) }
      get :index, params: {per_page: 2}
      expect(assigns[:notifications].count).to eq(2)
    end
    
            it 'doesn\'t allow the user to reshare the post again' do
          post_request!
          expect(response.code).to eq('422')
          expect(response.body).to eq(I18n.t('reshares.create.error'))
        end
      end
    
          def call(env)
        status, headers, body = super
        response = Rack::Response.new(body, status, headers)
        request = Rack::Request.new(env)
        remove_bad_cookies(request, response)
        response.finish
      end
    
        post('/', {'csrf_param' => token}, 'rack.session' => {:csrf => token})
    expect(last_response).to be_ok
  end
    
    desc 'Test the paperclip plugin under all supported Rails versions.'
task :all do |t|
  if ENV['BUNDLE_GEMFILE']
    exec('rake spec && cucumber')
  else
    exec('rm -f gemfiles/*.lock')
    Rake::Task['appraisal:gemfiles'].execute
    Rake::Task['appraisal:install'].execute
    exec('rake appraisal')
  end
end
    
    When /^(?:|I )go to (.+)$/ do |page_name|
  visit path_to(page_name)
end
    
        EMPTY_TYPE = 'inode/x-empty'
    SENSIBLE_DEFAULT = 'application/octet-stream'
    
        def define
      define_flush_errors
      define_getters
      define_setter
      define_query
      register_new_attachment
      add_active_record_callbacks
      add_paperclip_callbacks
      add_required_validations
    end