
        
            initializer 'action_view.caching' do |app|
      ActiveSupport.on_load(:action_view) do
        if app.config.action_view.cache_template_loading.nil?
          ActionView::Resolver.caching = app.config.cache_classes
        end
      end
    end
    
    module ActionView
  # This class defines the interface for a renderer. Each class that
  # subclasses +AbstractRenderer+ is used by the base +Renderer+ class to
  # render a specific type of object.
  #
  # The base +Renderer+ class uses its +render+ method to delegate to the
  # renderers. These currently consist of
  #
  #   PartialRenderer - Used for rendering partials
  #   TemplateRenderer - Used for rendering other types of templates
  #   StreamingTemplateRenderer - Used for streaming
  #
  # Whenever the +render+ method is called on the base +Renderer+ class, a new
  # renderer object of the correct type is created, and the +render+ method on
  # that new object is called in turn. This abstracts the setup and rendering
  # into a separate classes for partials and templates.
  class AbstractRenderer #:nodoc:
    delegate :find_template, :find_file, :template_exists?, :any_templates?, :with_fallbacks, :with_layout_format, :formats, to: :@lookup_context
    
        # Render but returns a valid Rack body. If fibers are defined, we return
    # a streaming body that renders the template piece by piece.
    #
    # Note that partials are not supported to be rendered with streaming,
    # so in such cases, we just wrap them in an array.
    def render_body(context, options)
      if options.key?(:partial)
        [render_partial(context, options)]
      else
        StreamingTemplateRenderer.new(@lookup_context).render(context, options)
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
    
          it 'generates a richer DOT script' do
        expect(agents_dot(@agents, rich: true)).to match(%r{
          \A
          digraph \x20 'Agent \x20 Event \x20 Flow' \{
            (graph \[ [^\]]+ \];)?
            node \[ [^\]]+ \];
            edge \[ [^\]]+ \];
            (?<foo>\w+) \[label=foo,tooltip='Dot \x20 Foo',URL='#{Regexp.quote(agent_path(@foo))}'\];
            \k<foo> -> (?<bar1>\w+) \[style=dashed\];
            \k<foo> -> (?<bar2>\w+) \[color='\#999999'\];
            \k<bar1> \[label=bar1,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar1))}'\];
            \k<bar2> \[label=bar2,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar2))}',style='rounded,dashed',color='\#999999',fontcolor='\#999999'\];
            \k<bar2> -> (?<bar3>\w+) \[style=dashed,color='\#999999'\];
            \k<bar3> \[label=bar3,tooltip='Dot \x20 Bar',URL='#{Regexp.quote(agent_path(@bar3))}'\];
          \}
          \z
        }x)
      end
    end
  end
    
          expect(exporter.as_json[:control_links]).to eq([{ :controller => guid_order(agent_list, :jane_rain_notifier_agent), :control_target => guid_order(agent_list, :jane_weather_agent) }])
    end
  end
    
      describe 'cleanup_failed_jobs!' do
    before do
      3.times do |i|
        Delayed::Job.create(failed_at: Time.now - i.minutes)
      end
      @keep = Delayed::Job.order(:failed_at)[1]
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
    
        def translation_scope
      'devise.unlocks'
    end
end

    
      # Override prefixes to consider the scoped view.
  # Notice we need to check for the request due to a bug in
  # Action Controller tests that forces _prefixes to be
  # loaded before even having a request object.
  #
  # This method should be public as it is in ActionPack
  # itself. Changing its visibility may break other gems.
  def _prefixes #:nodoc:
    @_prefixes ||= if self.class.scoped_views? && request && devise_mapping
      ['#{devise_mapping.scoped_path}/#{controller_name}'] + super
    else
      super
    end
  end
    
    class TestController < ApplicationController
  include Rails.application.routes.url_helpers
    
      # Defines which strategy can be used to unlock an account.
  # Values: :email, :time, :both
  mattr_accessor :unlock_strategy
  @@unlock_strategy = :both
    
            class_eval <<-METHODS, __FILE__, __LINE__ + 1
          def authenticate_#{mapping}!(opts={})
            opts[:scope] = :#{mapping}
            warden.authenticate!(opts) if !devise_controller? || opts.delete(:force)
          end
    
          private
    
        if processes.stdout.lines.any? { |line| line =~ %r{^\d+\t\d\tcom.apple.SafariNotificationAgent$} }
      system_command '/usr/bin/killall', args: ['-kill', 'SafariNotificationAgent']
    end
    
      #
  # If there were CGI parameters in the URI, this will hold a hash of each
  # variable to value.  If there is more than one value for a given variable,
  # an array of each value is returned.
  #
  def qstring
    self.uri_parts['QueryString']
  end
    
    
IAX_SUBTYPE_NEW     = 1
IAX_SUBTYPE_PING    = 2
IAX_SUBTYPE_PONG    = 3
IAX_SUBTYPE_ANSWER  = 4
IAX_SUBTYPE_ACK     = 4
IAX_SUBTYPE_HANGUP  = 5
IAX_SUBTYPE_REJECT  = 6
IAX_SUBTYPE_ACCEPT  = 7
IAX_SUBTYPE_AUTHREQ = 8
IAX_SUBTYPE_AUTHREP = 9
IAX_SUBTYPE_INVAL   = 10
IAX_SUBTYPE_LAGRQ   = 11
IAX_SUBTYPE_LAGRP   = 12
IAX_SUBTYPE_REGREQ  = 13
IAX_SUBTYPE_REGAUTH = 14
IAX_SUBTYPE_REGACK  = 15
IAX_SUBTYPE_REGREJ  = 16
IAX_SUBTYPE_REGREL  = 17
IAX_SUBTYPE_VNAK    = 18
    
              # Encodes a Rex::Proto::Kerberos::Model::Checksum into an ASN.1 String
          #
          # @return [String]
          def encode
            elems = []
            elems << OpenSSL::ASN1::ASN1Data.new([encode_type], 0, :CONTEXT_SPECIFIC)
            elems << OpenSSL::ASN1::ASN1Data.new([encode_checksum], 1, :CONTEXT_SPECIFIC)
    
              # Decodes a Rex::Proto::Kerberos::Model::KrbError from an String
          #
          # @param input [String] the input to decode from
          def decode_string(input)
            asn1 = OpenSSL::ASN1.decode(input)
    
      include_examples 'multiline literal brace layout trailing comma' do
    let(:open) { '[' }
    let(:close) { ']' }
  end
end
