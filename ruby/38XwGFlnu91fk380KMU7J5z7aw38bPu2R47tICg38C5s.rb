
        
            expected = <<~MD
      <div class='poll' data-poll-status='open' data-poll-type='multiple' data-poll-name='poll'>
      <div>
      <div class='poll-container'>
      <ol>
      <li data-poll-option-id='b6475cbf6acb8676b20c60582cfc487a'>test 1 <img src='/images/emoji/twitter/slight_smile.png?v=#{Emoji::EMOJI_VERSION}' title=':slight_smile:' class='emoji' alt=':slight_smile:'> <b>test</b>
      </li>
      <li data-poll-option-id='7158af352698eb1443d709818df097d4'>test 2</li>
      </ol>
      </div>
      <div class='poll-info'>
      <p>
      <span class='info-number'>0</span>
      <span class='info-label'>voters</span>
      </p>
      </div>
      </div>
      </div>
    MD
    
          # there might be more information available in the exception
      if message_template == :email_reject_invalid_post && e.message.size > 6
        message_template = :email_reject_invalid_post_specified
        template_args[:post_error] = e.message
      end
    
          settings2.refresh!
      expect(settings2.hello).to eq(99)
    end
    
            if @run_remote && @run_remote.is_a?(Hash)
          new_run = VagrantPlugins::Shell::Config.new
          new_run.set_options(@run_remote)
          new_run.finalize!
          @run_remote = new_run
        end
    
    # Load in helpers
require 'unit/support/dummy_communicator'
require 'unit/support/dummy_provider'
require 'unit/support/shared/base_context'
require 'unit/support/shared/action_synced_folders_context'
require 'unit/support/shared/capability_helpers_context'
require 'unit/support/shared/plugin_command_context'
require 'unit/support/shared/virtualbox_context'
    
      describe '#machine' do
    # A helper to register a provider for use in tests.
    def register_provider(name, config_class=nil, options=nil)
      provider_cls = Class.new(VagrantTests::DummyProvider)
    
          # If it is a multi-machine environment, then return the primary
      @config.vm.defined_vms.each do |name, subvm|
        return name if subvm.options[:primary]
      end
    
          iso_env.box3('base', '1.0', :foo, vagrantfile: <<-VF)
      Vagrant.configure('2') do |config|
        config.ssh.port = 123
      end
      VF
    
    require File.expand_path('../../base', __FILE__)
    
      # This returns a true/false if we are running within a bundler environment
  #
  # @return [Boolean]
  def self.in_bundler?
    !!ENV['BUNDLE_GEMFILE'] &&
      !defined?(::Bundler).nil?
  end
    
      def send_sinatra_file(path, &missing_file_block)
    file_path = File.join(File.dirname(__FILE__), 'public',  path)
    file_path = File.join(file_path, 'index.html') unless file_path =~ /\.[a-z]+$/i
    File.exist?(file_path) ? send_file(file_path) : missing_file_block.call
  end
    
        def render(context)
      quote = paragraphize(super)
      author = '<strong>#{@by.strip}</strong>' if @by
      if @source
        url = @source.match(/https?:\/\/(.+)/)[1].split('/')
        parts = []
        url.each do |part|
          if (parts + [part]).join('/').length < 32
            parts << part
          end
        end
        source = parts.join('/')
        source << '/&hellip;' unless source == @source
      end
      if !@source.nil?
        cite = ' <cite><a href='#{@source}'>#{(@title || source)}</a></cite>'
      elsif !@title.nil?
        cite = ' <cite>#{@title}</cite>'
      end
      blockquote = if @by.nil?
        quote
      elsif cite
        '#{quote}<footer>#{author + cite}</footer>'
      else
        '#{quote}<footer>#{author}</footer>'
      end
      '<blockquote>#{blockquote}</blockquote>'
    end
    
        def initialize(tag_name, markup, tokens)
      attributes = ['class', 'src', 'width', 'height', 'title']
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end