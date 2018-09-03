
        
              # Creates a file upload field. If you are using file uploads then you will also need
      # to set the multipart option for the form tag:
      #
      #   <%= form_tag '/upload', multipart: true do %>
      #     <label for='file'>File to Upload</label> <%= file_field_tag 'file' %>
      #     <%= submit_tag %>
      #   <% end %>
      #
      # The specified URL will then be passed a File object containing the selected file, or if the field
      # was left blank, a StringIO object.
      #
      # ==== Options
      # * Creates standard HTML attributes for the tag.
      # * <tt>:disabled</tt> - If set to true, the user will not be able to use this input.
      # * <tt>:multiple</tt> - If set to true, *in most updated browsers* the user will be allowed to select multiple files.
      # * <tt>:accept</tt> - If set to one or multiple mime-types, the user will be suggested a filter when choosing a file. You still need to set up model validations.
      #
      # ==== Examples
      #   file_field_tag 'attachment'
      #   # => <input id='attachment' name='attachment' type='file' />
      #
      #   file_field_tag 'avatar', class: 'profile_input'
      #   # => <input class='profile_input' id='avatar' name='avatar' type='file' />
      #
      #   file_field_tag 'picture', disabled: true
      #   # => <input disabled='disabled' id='picture' name='picture' type='file' />
      #
      #   file_field_tag 'resume', value: '~/resume.doc'
      #   # => <input id='resume' name='resume' type='file' value='~/resume.doc' />
      #
      #   file_field_tag 'user_pic', accept: 'image/png,image/gif,image/jpeg'
      #   # => <input accept='image/png,image/gif,image/jpeg' id='user_pic' name='user_pic' type='file' />
      #
      #   file_field_tag 'file', accept: 'text/html', class: 'upload', value: 'index.html'
      #   # => <input accept='text/html' class='upload' id='file' name='file' type='file' value='index.html' />
      def file_field_tag(name, options = {})
        text_field_tag(name, nil, convert_direct_upload_option_to_url(options.merge(type: :file)))
      end
    
    task :spec => :test
require 'rake/testtask'
Rake::TestTask.new(:test) do |test|
  test.libs << 'lib' << 'test'
  test.pattern = 'test/**/test_*.rb'
  test.verbose = true
end
    
    Benchmark.ips do |x|
  x.report('no body include?') { CONTENT_NOT_CONTAINING.include?('<body') }
  x.report('no body regexp')   { CONTENT_NOT_CONTAINING =~ /<\s*body/ }
  x.compare!
end
    
    def run_bundle(args)
  run_in_shell('bundle', *args.strip.split(' '))
end
    
        # The path used after sending reset password instructions
    def after_sending_reset_password_instructions_path_for(resource_name)
      new_session_path(resource_name) if is_navigational_format?
    end
    
      # POST /resource/unlock
  def create
    self.resource = resource_class.send_unlock_instructions(resource_params)
    yield resource if block_given?
    
        def password_change(record, opts={})
      devise_mail(record, :password_change, opts)
    end
  end
end

    
          def stored_location_key_for(resource_or_scope)
        scope = Devise::Mapping.find_scope!(resource_or_scope)
        '#{scope}_return_to'
      end
    
          unless root?
        raise Invalid, 'missing name' if !name || name.empty?
        raise Invalid, 'missing path' if !path || path.empty?
        raise Invalid, 'missing type' if !type || type.empty?
      end
    end
    
        def parse_as_fragment
      Nokogiri::HTML.fragment @content, 'UTF-8'
    end
  end
end

    
        def error?
      code == 0 || code != 404 && code != 403 && code >= 400 && code <= 599
    end
    
    module Docs
  class Scraper < Doc
    class << self
      attr_accessor :base_url, :root_path, :initial_paths, :options, :html_filters, :text_filters, :stubs
    
            css('.api-profile-header-structure > li').each do |node|
          node.inner_html = node.inner_html.remove('- ')
        end
    
        def get_cache_file_for(gist, file)
      bad_chars = /[^a-zA-Z0-9\-_.]/
      gist      = gist.gsub bad_chars, ''
      file      = file.gsub bad_chars, ''
      md5       = Digest::MD5.hexdigest '#{gist}-#{file}'
      File.join @cache_folder, '#{gist}-#{file}-#{md5}.cache'
    end
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end
    
    class LogStash::PluginManager::Unpack < LogStash::PluginManager::PackCommand
  option '--tgz', :flag, 'unpack a packaged tar.gz file', :default => !LogStash::Environment.windows?
  option '--zip', :flag, 'unpack a packaged  zip file', :default => LogStash::Environment.windows?
    
    shared_examples 'logstash install' do |logstash|
  before(:each) do
    logstash.install({:version => LOGSTASH_VERSION})
  end