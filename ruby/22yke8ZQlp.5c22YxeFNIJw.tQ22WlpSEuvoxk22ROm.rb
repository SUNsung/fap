
        
                msg = ' Please append `--trace` to the `#{cmd.name}` command '
        dashes = '-' * msg.length
        Jekyll.logger.error '', dashes
        Jekyll.logger.error 'Jekyll #{Jekyll::VERSION} ', msg
        Jekyll.logger.error '', ' for any additional information or backtrace. '
        Jekyll.logger.abort_with '', dashes
      end
      # rubocop: enable RescueException
    end
  end
end

    
            def url_exists?(url)
          return true unless url.nil? || url.empty?
          Jekyll.logger.warn 'Warning:', 'You didn't set an URL in the config file, '\
              'you may encounter problems with some plugins.'
          false
        end
    
    module Jekyll
  module Commands
    class NewTheme < Jekyll::Command
      class << self
        def init_with_program(prog)
          prog.command(:'new-theme') do |c|
            c.syntax 'new-theme NAME'
            c.description 'Creates a new Jekyll theme scaffold'
            c.option 'code_of_conduct', \
                     '-c', '--code-of-conduct', \
                     'Include a Code of Conduct. (defaults to false)'
    
          class Servlet < WEBrick::HTTPServlet::FileHandler
        DEFAULTS = {
          'Cache-Control' => 'private, max-age=0, proxy-revalidate, ' \
            'no-store, no-cache, must-revalidate',
        }.freeze
    
          def extname_list
        @extname_list ||= @config['markdown_ext'].split(',').map do |e|
          '.#{e.downcase}'
        end
      end
    
    module Kramdown
  module Parser
    class SmartyPants < Kramdown::Parser::Kramdown
      def initialize(source, options)
        super
        @block_parsers = [:block_html, :content]
        @span_parsers =  [:smart_quotes, :html_entity, :typographic_syms, :span_html]
      end
    
          # Check if key exists in Drop
      #
      # key - the string key whose value to fetch
      #
      # Returns true if the given key is present
      def key?(key)
        return false if key.nil?
        return true if self.class.mutable? && @mutations.key?(key)
        respond_to?(key) || fallback_data.key?(key)
      end
    
          def get_type
        return 'Reference' if base_url.path == '/spec/'
    
        version '3' do
      self.release = '3.5.17'
      self.base_url = 'https://github.com/d3/d3-3.x-api-reference/blob/master/'
      self.root_path = 'API-Reference.md'
    
        version 'Sys' do
      self.base_url = 'https://api.haxe.org/sys/'
    end
    
        html_filters.push 'rust/entries', 'rust/clean_html'
    
    module Docs
  class Tensorflow < UrlScraper
    self.name = 'TensorFlow'
    self.type = 'tensorflow'
    self.release = '1.8'
    self.root_path = 'index.html'
    self.links = {
      home: 'https://www.tensorflow.org/',
      code: 'https://github.com/tensorflow/tensorflow'
    }
    
        def as_json
      { name: name, path: path, type: type }
    end
  end
end

    
        grouped_codes = codes.reduce([]) do |agg, current|
      if current[1]
        agg << [current[0]]
      else
        agg.last << current[0]
        agg
      end
    end
    
    class NotificationMailerPreview < ActionMailer::Preview
  # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/mention
  def mention
    m = Mention.last
    NotificationMailer.mention(m.account, Notification.find_by(activity: m))
  end
    
      # Creates a delayed logger wrapping `inner`.
  #
  # @param inner [Sass::Logger::Base] The wrapped logger.
  def initialize(inner)
    self.log_level = inner.log_level
    @inner = inner
    @messages = []
  end
    
        # Returns the CSS for the media query.
    #
    # @return [String]
    def to_css
      css = ''
      css << resolved_modifier
      css << ' ' unless resolved_modifier.empty?
      css << resolved_type
      css << ' and ' unless resolved_type.empty? || expressions.empty?
      css << expressions.map do |e|
        # It's possible for there to be script nodes in Expressions even when
        # we're converting to CSS in the case where we parsed the document as
        # CSS originally (as in css_test.rb).
        e.map {|c| c.is_a?(Sass::Script::Tree::Node) ? c.to_sass : c.to_s}.join
      end.join(' and ')
      css
    end
    
      require 'sass/plugin/rack'
  class Sass::Plugin::MerbBootLoader < Merb::BootLoader
    after Merb::BootLoader::RackUpApplication
    
        def parse_input(environment, text)
      case text
      when Script::MATCH
        name = $1
        guarded = !!$3
        val = Script::Parser.parse($2, @line, text.size - ($3 || '').size - $2.size)