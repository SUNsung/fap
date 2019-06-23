
        
            private
    
      def self.path
    '/highlight-js/#{Discourse.current_hostname}/#{version SiteSetting.highlighted_languages}.js'
  end
end

    
          response.headers['Last-Modified'] = 10.years.ago.httpdate
      response.headers['Content-Length'] = svg_sprite.bytesize.to_s
      immutable_for 1.year
    
          log(action: 'miss token',
          user_id: user_token&.user_id,
          auth_token: token,
          user_agent: opts && opts[:user_agent],
          path: opts && opts[:path],
          client_ip: opts && opts[:client_ip])
    
      # Under Phusion Passenger smart spawning, we need to reopen all IO streams
  # after workers have forked.
  #
  # The rolling file appender uses shared file locks to ensure that only one
  # process will roll the log file. Each process writing to the file must have
  # its own open file descriptor for `flock` to function properly. Reopening
  # the file descriptors after forking ensures that each worker has a unique
  # file descriptor.
  if defined? PhusionPassenger
    PhusionPassenger.on_event(:starting_worker_process) do |forked|
      Logging.reopen if forked
    end
  end
end
    
      describe '#destroy' do
    before do
      @message = bob.post(:status_message, text: 'hey', to: @alices_aspect.id)
      @like = alice.like!(@message)
    end
    
          it 'returns an array of reshares for a post' do
        bob.reshare!(@post)
        get :index, params: {post_id: @post.id}, format: :json
        expect(JSON.parse(response.body).map {|h| h['id'] }).to eq(@post.reshares.map(&:id))
      end
    
      # Integration tests
  gem 'diffy'
  gem 'clintegracon'
    
            def self.options
          [[
            '--short', 'Only print the path relative to the cache root'
          ]].concat(super)
        end
    
              versions.each do |version|
            spec = source.specification(set.name, version)
            paths += '#{pathname_from_spec(spec, source)}\n'
          end
        end
    
    RSpec.describe JSFiddleTag, type: :liquid_template do
  describe '#link' do
    let(:jsfiddle_link) { 'http://jsfiddle.net/link2twenty/v2kx9jcd' }
    let(:jsfiddle_link_with_custom_tabs) { 'http://jsfiddle.net/link2twenty/v2kx9jcd result,html,css' }
    
      def user_is_author?
    record.user_id == user.id
  end
end

    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
    class ConfigTag < Liquid::Tag
  def initialize(tag_name, options, tokens)
    super
    options = options.split(' ').map {|i| i.strip }
    @key = options.slice!(0)
    @tag = nil
    @classname = nil
    options.each do |option|
      @tag = $1 if option =~ /tag:(\S+)/ 
      @classname = $1 if option =~ /classname:(\S+)/
    end
  end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
    describe Tmuxinator::Pane do
  let(:klass) { described_class }
  let(:instance) { klass.new(index, project, window, *commands) }
  # let(:index) { 'vim' }
  # let(:project) { 0 }
  # let(:tab) { nil }
  # let(:commands) { nil }
  let(:index) { 0 }
  let(:project) { double }
  let(:window) { double }
  let(:commands) { ['vim', 'bash'] }
    
              if yes?('Are you sure you want to delete #{project}?(y/n)', :red)
            FileUtils.rm(config)
            say 'Deleted #{project}'
          end
        else
          say '#{project} does not exist!'
        end
      end
    end