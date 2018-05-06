
        
            # Gets the name of this layout.
    attr_reader :name
    
          def parse(content)
        measure_time do
          @template = Liquid::Template.parse(content, :line_numbers => true)
        end
    
        def self.git_log_between(pretty_format, from, to, merge_commit_filtering, date_format = nil, ancestry_path)
      command = ['git log']
      command << '--pretty=\'#{pretty_format}\''
      command << '--date=\'#{date_format}\'' if date_format
      command << '--ancestry-path' if ancestry_path
      command << '#{from.shellescape}...#{to.shellescape}'
      command << git_log_merge_commit_filtering_option(merge_commit_filtering)
      Actions.sh(command.compact.join(' '), log: false).chomp
    rescue
      nil
    end
    
    describe :string_unpack_32bit_be, shared: true do
  it 'decodes one int for a single format character' do
    'dcba'.unpack(unpack_format).should == [1684234849]
  end
    
      it 'returns empty strings for repeated formats if the input is empty' do
    ''.unpack(unpack_format(nil, 3)).should == ['', '', '']
  end
    
        it 'runs all outer ensure clauses even if inner ensure clause raises exception' do
      ThreadSpecs.join_dying_thread_with_outer_ensure(@method) { ScratchPad.record :in_outer_ensure_clause }
      ScratchPad.recorded.should == :in_outer_ensure_clause
    end
    
      it 'interprets post-Gregorian reform dates using Gregorian calendar' do
    Time.send(@method, 1582, 10, 15, 12).to_i.should == -12219249600 # 2299161j
  end
    
          # Inspired by https://github.com/nov/openid_connect_sample/blob/master/app/controllers/connect/clients_controller.rb#L24
      def create
        registrar = OpenIDConnect::Client::Registrar.new(request.url, params)
        client = Api::OpenidConnect::OAuthApplication.register! registrar
        render json: client.as_json(root: false)
      end
    
    # A logger that delays messages until they're explicitly flushed to an inner
# logger.
#
# This can be installed around the current logger by calling \{#install!}, and
# the original logger can be replaced by calling \{#uninstall!}. The log
# messages can be flushed by calling \{#flush}.
class Sass::Logger::Delayed < Sass::Logger::Base
  # Installs a new delayed logger as the current Sass logger, wrapping the
  # original logger.
  #
  # This can be undone by calling \{#uninstall!}.
  #
  # @return [Sass::Logger::Delayed] The newly-created logger.
  def self.install!
    logger = Sass::Logger::Delayed.new(Sass.logger)
    Sass.logger = logger
    logger
  end
    
      # Converts an interpolation array to source.
  #
  # @param interp [Array<String, Sass::Script::Tree::Node>] The interpolation array to convert.
  # @param options [{Symbol => Object}] An options hash (see {Sass::CSS#initialize}).
  # @return [String]
  def self._interp_to_src(interp, options)
    interp.map {|r| r.is_a?(String) ? r : r.to_sass(options)}.join
  end
end

    
      Sass::Plugin.options.merge!(config)
    
            It is possible to specify a list of dependencies which will be used by
        the template in the `Podfile.default` (normal targets) `Podfile.test`
        (test targets) files which should be stored in the
        `~/.cocoapods/templates` folder.
      DESC
      self.arguments = [
        CLAide::Argument.new('XCODEPROJ', :false),
      ]
    
    Liquid::Template.register_tag('blockquote', Jekyll::Blockquote)

    
    Liquid::Template.register_tag('render_partial', Jekyll::RenderPartialTag)

    
            def update
          authorize! :update, stock_location
          if stock_location.update_attributes(stock_location_params)
            respond_with(stock_location, status: 200, default_template: :show)
          else
            invalid_resource!(stock_location)
          end
        end