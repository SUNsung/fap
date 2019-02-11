
        
              # This method returns an HTML safe string similar to what <tt>Array#join</tt>
      # would return. The array is flattened, and all items, including
      # the supplied separator, are HTML escaped unless they are HTML
      # safe, and the returned string is marked as HTML safe.
      #
      #   safe_join([raw('<p>foo</p>'), '<p>bar</p>'], '<br />')
      #   # => '<p>foo</p>&lt;br /&gt;&lt;p&gt;bar&lt;/p&gt;'
      #
      #   safe_join([raw('<p>foo</p>'), raw('<p>bar</p>')], raw('<br />'))
      #   # => '<p>foo</p><br /><p>bar</p>'
      #
      def safe_join(array, sep = $,)
        sep = ERB::Util.unwrapped_html_escape(sep)
    
            class RadioButtonBuilder < Builder # :nodoc:
          def radio_button(extra_html_options = {})
            html_options = extra_html_options.merge(@input_html_options)
            html_options[:skip_default_ids] = false
            @template_object.radio_button(@object_name, @method_name, @value, html_options)
          end
        end
    
        def message
      @string.force_encoding(Encoding::ASCII_8BIT)
      'Your template was not saved as valid #{@encoding}. Please ' \
      'either specify #{@encoding} as the encoding for your template ' \
      'in your text editor, or mark the template with its ' \
      'encoding by inserting the following as the first line ' \
      'of the template:\n\n# encoding: <name of correct encoding>.\n\n' \
      'The source of your template was:\n\n#{@string}'
    end
  end
    
        it 'returns a correct icon tag for other services' do
      icon = omniauth_provider_icon(:'37signals')
      expect(icon).to be_html_safe
      elem = Nokogiri(icon).at('i.fa.fa-lock')
      expect(elem).to be_a Nokogiri::XML::Element
    end
  end
    
        describe '#agents_dot' do
      before do
        @agents = [
          @foo = Agents::DotFoo.new(name: 'foo').tap { |agent|
            agent.user = users(:bob)
            agent.save!
          },
    
        it 'defauls foreground and background colors' do
      scenario.tag_fg_color = nil
      scenario.tag_bg_color = nil
      expect(style_colors(scenario)).to eq('color:#FFFFFF;background-color:#5BC0DE')
    end
  end
    
      it 'schould clean up expired events' do
    mock(Event).cleanup_expired!
    stub.instance_of(IO).puts
    @scheduler.send(:cleanup_expired_events!)
  end
    
          expect(Utils.unindent(<<-MD)).to eq('Hello World\nThis is\nnot indented')
        Hello World
        This is
        not indented
      MD
    
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
    
    module Admin
  class CustomEmojisController < BaseController
    before_action :set_custom_emoji, except: [:index, :new, :create]
    before_action :set_filter_params
    
        def new
      authorize :email_domain_block, :create?
      @email_domain_block = EmailDomainBlock.new
    end
    
    class Api::SubscriptionsController < Api::BaseController
  before_action :set_account
  respond_to :txt
    
        # Mobile devices do not support regular notifications, so we enable push notifications by default
    alerts_enabled = active_session.detection.device.mobile? || active_session.detection.device.tablet?
    
    class FormulaPin
  def initialize(f)
    @f = f
  end
    
            expect(path).to have_valid_bash_syntax
      end
    end
  end
    
        # Tells optparse how to parse the arguments
    # available for all executables.
    #
    # This is meant to be overridden by subclasses
    # so they can add their own options.
    #
    # @param opts [OptionParser]
    def set_opts(opts)
      Sass::Util.abstract(this)
    end
    
          opts.on('-s', '--stdin', :NONE,
              'Read input from standard input instead of an input file.',
              'This is the default if no input file is specified.') do
        @options[:input] = $stdin
      end
    
          # Returns the time the given Sass file was last modified.
      #
      # If the given file has been deleted or the time can't be accessed
      # for some other reason, this should return nil.
      #
      # @param uri [String] The URI of the file to check.
      #   Comes from a `:filename` option set on an engine returned by this importer.
      # @param options [{Symbol => Object}] Options for the Sass file
      #   containing the `@import` currently being checked.
      # @return [Time, nil]
      def mtime(uri, options)
        Sass::Util.abstract(self)
      end
    
      def output(output_path)
    # See https://github.com/jordansissel/fpm/issues/1090
    # require xz later, because this triggers a load of liblzma.so.5 that is
    # unavailable on older CentOS/RH distros.
    require 'xz'
    output_check(output_path)
    
      def output(output_path)
    self.scripts.each do |name, path|
      case name
        when 'pre-install'
          safesystem('cp', path, './preinstall')
          File.chmod(0755, './preinstall')
        when 'post-install'
          safesystem('cp', path, './postinstall')
          File.chmod(0755, './postinstall')
        when 'pre-uninstall'
          raise FPM::InvalidPackageConfiguration.new(
            'pre-uninstall is not supported by Solaris packages'
          )
        when 'post-uninstall'
          raise FPM::InvalidPackageConfiguration.new(
            'post-uninstall is not supported by Solaris packages'
          )
      end # case name
    end # self.scripts.each
    
        safesystem('tar', *args)