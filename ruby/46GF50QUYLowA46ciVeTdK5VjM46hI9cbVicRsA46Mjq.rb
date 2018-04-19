
        
              def respond_to_missing?(name, include_private = false)
        begin
          routes = @controller.respond_to?(:_routes) && @controller._routes
        rescue
          # Don't call routes, if there is an error on _routes call
        end
    
    module ActionCable
  module Server
    # An instance of this configuration object is available via ActionCable.server.config, which allows you to tweak Action Cable configuration
    # in a Rails config initializer.
    class Configuration
      attr_accessor :logger, :log_tags
      attr_accessor :connection_class, :worker_pool_size
      attr_accessor :disable_request_forgery_protection, :allowed_request_origins, :allow_same_origin_as_host
      attr_accessor :cable, :url, :mount_path
    
        def encode_credentials(token, options = {})
      ActionController::HttpAuthentication::Token.encode_credentials(token, options)
    end
end

    
            def set_delivery_method(method)
          @old_delivery_method = ActionMailer::Base.delivery_method
          ActionMailer::Base.delivery_method = method
        end
    
      test 'does not raise errors on bogus deliveries if set' do
    old_raise_delivery_errors = DeliveryMailer.raise_delivery_errors
    begin
      DeliveryMailer.delivery_method = BogusDelivery
      DeliveryMailer.raise_delivery_errors = false
      assert_nothing_raised do
        DeliveryMailer.welcome.deliver_now
      end
    ensure
      DeliveryMailer.raise_delivery_errors = old_raise_delivery_errors
    end
  end
    
    require 'abstract_unit'
require 'action_view'
require 'action_controller'
    
        def filter_const(name)
      if name.is_a? Array
        name.map &method(:filter_const)
      else
        Docs.const_get '#{name}_filter'.camelize
      end
    end
    
        def initialize
      @pages = {}
    end
    
            css('.note h3', '.warning h3').each do |node|
          node.before('<p><strong>#{node.inner_html}</strong></p>').remove
        end
    
          def values_at(*indices)
        indices.collect { |key| self[convert_key(key)] }
      end
    
              opts = OptionParser.new do |o|
            o.banner = 'Usage: vagrant box remove <name>'
            o.separator ''
            o.separator 'Options:'
            o.separator ''
    
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
    
    module Hardware
  describe CPU do
    describe '::type' do
      it 'returns the current CPU's type as a symbol, or :dunno if it cannot be detected' do
        expect(
          [
            :intel,
            :ppc,
            :dunno,
          ],
        ).to include(described_class.type)
      end
    end
    
        case list
    when Hash
      list
    when Array, String, :DATA
      { p1: list }
    else
      {}
    end.each_pair do |strip, urls|
      Array(urls).each do |url|
        case url
        when :DATA
          patch = DATAPatch.new(strip)
        else
          patch = LegacyPatch.new(strip, url)
        end
        patches << patch
      end
    end
    
        def initialize(attributes={})
      assign_attributes(attributes)
      yield(self) if block_given?
    end
    
    desc 'Move sass to sass.old, install sass theme updates, replace sass/custom with sass.old/custom'
task :update_style, :theme do |t, args|
  theme = args.theme || 'classic'
  if File.directory?('sass.old')
    puts 'removed existing sass.old directory'
    rm_r 'sass.old', :secure=>true
  end
  mv 'sass', 'sass.old'
  puts '## Moved styles into sass.old/'
  cp_r '#{themes_dir}/'+theme+'/sass/', 'sass', :remove_destination=>true
  cp_r 'sass.old/custom/.', 'sass/custom/', :remove_destination=>true
  puts '## Updated Sass ##'
end
    
      if options.respond_to? 'keys'
    options.each do |k,v|
      unless v.nil?
        v = v.join ',' if v.respond_to? 'join'
        v = v.to_json if v.respond_to? 'keys'
        output += ' data-#{k.sub'_','-'}='#{v}''
      end
    end
  elsif options.respond_to? 'join'
    output += ' data-value='#{config[key].join(',')}''
  else
    output += ' data-value='#{config[key]}''
  end
  output += '></#{tag}>'
end
    
          if markup =~ /(?<class>\S.*\s+)?(?<src>(?:https?:\/\/|\/|\S+\/)\S+)(?:\s+(?<width>\d+))?(?:\s+(?<height>\d+))?(?<title>\s+.+)?/i
        @img = attributes.reduce({}) { |img, attr| img[attr] = $~[attr].strip if $~[attr]; img }
        if /(?:'|')(?<title>[^'']+)?(?:'|')\s+(?:'|')(?<alt>[^'']+)?(?:'|')/ =~ @img['title']
          @img['title']  = title
          @img['alt']    = alt
        else
          @img['alt']    = @img['title'].gsub!(/'/, '&#34;') if @img['title']
        end
        @img['class'].gsub!(/'/, '') if @img['class']
      end
      super
    end
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end
    
      # DELETE /books/1
  # DELETE /books/1.json
  def destroy
    @book.destroy
    respond_to do |format|
      format.html { redirect_to books_url, notice: 'Book was successfully destroyed.' }
      format.json { head :no_content }
    end
  end
    
            def_node_matcher :on_body_of_reduce, <<-PATTERN
          (block (send _recv {:reduce :inject} !sym) _blockargs $(begin ...))
        PATTERN
    
    module RuboCop
  module Cop
    module Style
      # This cop checks against comparing a variable with multiple items, where
      # `Array#include?` could be used instead to avoid code repetition.
      #
      # @example
      #   # bad
      #   a = 'a'
      #   foo if a == 'a' || a == 'b' || a == 'c'
      #
      #   # good
      #   a = 'a'
      #   foo if ['a', 'b', 'c'].include?(a)
      class MultipleComparison < Cop
        MSG = 'Avoid comparing a variable with multiple items ' \
          'in a conditional, use `Array#include?` instead.'.freeze
    
            def on_send(node)
          return unless node.receiver && node.method?(:freeze) &&
                        immutable_literal?(node.receiver)