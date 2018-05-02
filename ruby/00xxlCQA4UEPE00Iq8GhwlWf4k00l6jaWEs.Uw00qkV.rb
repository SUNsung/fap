
        
          # GET /resource/sign_in
  def new
    self.resource = resource_class.new(sign_in_params)
    clean_up_passwords(resource)
    yield resource if block_given?
    respond_with(resource, serialize_options(resource))
  end
    
        def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
    module Devise
  module Controllers
    # A module that may be optionally included in a controller in order
    # to provide remember me behavior. Useful when signing in is done
    # through a callback, like in OmniAuth.
    module Rememberable
      # Return default cookie values retrieved from session options.
      def self.cookie_values
        Rails.configuration.session_options.slice(:path, :domain, :secure)
      end
    
      # Returns true if the set is a proper subset of the given set.
  def proper_subset?(set)
    case
    when set.instance_of?(self.class) && @hash.respond_to?(:<)
      @hash < set.instance_variable_get(:@hash)
    when set.is_a?(Set)
      size < set.size && all? { |o| set.include?(o) }
    else
      raise ArgumentError, 'value must be a set'
    end
  end
  alias < proper_subset?
    
    
    {      assert_equal(false, Set[].proper_subset?(klass[]), klass.name)
    }
  end
    
      it 'decodes the remaining shorts when passed the '*' modifier' do
    'badc'.unpack(unpack_format('*')).should == [25185, 25699]
  end
    
      it 'decodes the number of bytes specified by the count modifier including whitespace bytes' do
    [ ['a bc',  ['a b', 'c']],
      ['a\fbc', ['a\fb', 'c']],
      ['a\nbc', ['a\nb', 'c']],
      ['a\rbc', ['a\rb', 'c']],
      ['a\tbc', ['a\tb', 'c']],
      ['a\vbc', ['a\vb', 'c']]
    ].should be_computed_by(:unpack, unpack_format(3)+unpack_format)
  end
    
      it 'spawns a new Thread running the block' do
    run = false
    t = Thread.send(@method) { run = true }
    t.should be_kind_of(Thread)
    t.join
    
        def ensure_id_sequences_exist
      # Find tables using timestamp IDs.
      connection.tables.each do |table|
        # We're only concerned with 'id' columns.
        next unless (id_col = connection.columns(table).find { |col| col.name == 'id' })
    
    RSpec.describe BlockDomainService do
  let(:bad_account) { Fabricate(:account, username: 'badguy666', domain: 'evil.org') }
  let(:bad_status1) { Fabricate(:status, account: bad_account, text: 'You suck') }
  let(:bad_status2) { Fabricate(:status, account: bad_account, text: 'Hahaha') }
  let(:bad_attachment) { Fabricate(:media_attachment, account: bad_account, status: bad_status2, file: attachment_fixture('attachment.jpg')) }
    
      # Eager load code on boot. This eager loads most of Rails and
  # your application in memory, allowing both thread web servers
  # and those relying on copy on write to perform better.
  # Rake tasks automatically ignore this option for performance.
  config.eager_load = true
    
      def executable_path?(path)
    path.text_executable? || path.executable?
  end
    
            gnubin = %W[#{findutils.opt_libexec}/gnubin #{findutils.libexec}/gnubin]
        default_names = Tab.for_name('findutils').with? 'default-names'
        return if !default_names && (paths & gnubin).empty?
    
      # Uninstalls this logger from \{Sass.logger\}. This should only be called if
  # the logger was installed using \{#install!}
  def uninstall!
    if Sass.logger != self
      throw Exception.new('Can't uninstall a logger that's not currently installed.')
    end
    
      module Sass::Plugin::Configuration
    # Different default options in a m environment.
    def default_options
      @default_options ||= begin
        version = Merb::VERSION.split('.').map {|n| n.to_i}
        if version[0] <= 0 && version[1] < 5
          root = MERB_ROOT
          env  = MERB_ENV
        else
          root = Merb.root.to_s
          env  = Merb.environment
        end
    
            unless guarded && environment.var(name)
          environment.set_var(name, val.perform(environment))
        end
    
    module Jekyll
    
      class RenderPartialTag < Liquid::Tag
    include OctopressFilters
    def initialize(tag_name, markup, tokens)
      @file = nil
      @raw = false
      if markup =~ /^(\S+)\s?(\w+)?/
        @file = $1.strip
        @raw = $2 == 'raw'
      end
      super
    end