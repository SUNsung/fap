
        
            find_union(segments, Group).order_id_desc
  end
    
        def name=(value)
      @name = value.try :strip
    end
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
    puts '\nUnable to find an RSS feed for the following blogs:'
puts '==================================================='
unavailable.each do |b|
  puts '#{b.name} | #{b.web_url}'
end
puts '==================================================='

    
      # Clean a top-level (bin, sbin, lib) directory, recursively, by fixing file
  # permissions and removing .la files, unless the files (or parent
  # directories) are protected by skip_clean.
  #
  # bin and sbin should not have any subdirectories; if either do that is
  # caught as an audit warning
  #
  # lib may have a large directory tree (see Erlang for instance), and
  # clean_dir applies cleaning rules to the entire tree
  def clean_dir(d)
    d.find do |path|
      path.extend(ObserverPathnameExtension)
    
        token, username = api_credentials
    case api_credentials_type
    when :keychain
      args += %W[--user #{username}:#{token}]
    when :environment
      args += ['--header', 'Authorization: token #{token}']
    end
    
          def escape_hash(hash)
        hash = hash.dup
        hash.each { |k,v| hash[k] = escape(v) }
        hash
      end
    
        it 'leaves TempFiles untouched' do
      mock_app do |env|
        request = Rack::Request.new(env)
        [200, {'Content-Type' => 'text/plain'}, [request.params['file'][:filename] + '\n' + \
                                                 request.params['file'][:tempfile].read + '\n' + \
                                                 request.params['other']]]
      end
    
        it 'should be able to deal with PATH_INFO = nil (fcgi?)' do
      app = Rack::Protection::PathTraversal.new(proc { 42 })
      expect(app.call({})).to eq(42)
    end
  end
    
      it 'accepts a session without changes to tracked parameters' do
    session = {:foo => :bar}
    get '/', {}, 'rack.session' => session
    get '/', {}, 'rack.session' => session
    expect(session[:foo]).to eq(:bar)
  end
    
    module RuboCop
  module Cop
    module Lint
      # This cop checks that there are no repeated conditions
      # used in case 'when' expressions.
      #
      # @example
      #
      #   # bad
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'first'
      #     do_something_else
      #   end
      #
      # @example
      #
      #   # good
      #
      #   case x
      #   when 'first'
      #     do_something
      #   when 'second'
      #     do_something_else
      #   end
      class DuplicateCaseCondition < Cop
        MSG = 'Duplicate `when` condition detected.'.freeze
    
            # Annotate the source code with the RuboCop offenses provided
        #
        # @param offenses [Array<RuboCop::Cop::Offense>]
        #
        # @return [self]
        def with_offense_annotations(offenses)
          offense_annotations =
            offenses.map do |offense|
              indent     = ' ' * offense.column
              carets     = '^' * offense.column_length
    
        # Returns a unique hash suitable for obfuscating the URL of an otherwise
    # publicly viewable attachment.
    def hash_key(style_name = default_style)
      raise ArgumentError, 'Unable to generate hash without :hash_secret' unless @options[:hash_secret]
      require 'openssl' unless defined?(OpenSSL)
      data = interpolate(@options[:hash_data], style_name)
      OpenSSL::HMAC.hexdigest(OpenSSL::Digest.const_get(@options[:hash_digest]).new, @options[:hash_secret], data)
    end
    
        # True if the dimensions represent a vertical rectangle
    def vertical?
      height > width
    end
    
            def matches? subject
          @subject = subject
          @subject = subject.new if subject.class == Class
          error_when_not_valid? && no_error_when_valid?
        end
    
          class ValidateAttachmentSizeMatcher
        def initialize attachment_name
          @attachment_name = attachment_name
        end
    
    
    {  # Returns hash with styles missing from recent run of rake paperclip:refresh:missing_styles
  #   {
  #     :User => {:avatar => [:big]},
  #     :Book => {
  #       :cover => [:croppable]},
  #     }
  #   }
  def self.missing_attachments_styles
    current_styles = current_attachments_styles
    registered_styles = get_registered_attachments_styles