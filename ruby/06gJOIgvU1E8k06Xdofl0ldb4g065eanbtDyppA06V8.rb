
        
            assert_equal({ 'email' => 'jose' }, sanitized)
  end
    
              # TODO: replace above lines with
          # confirmable = find_or_initialize_with_error_by(:confirmation_token, confirmation_token)
          # after enough time has passed that Devise clients do not use digested tokens
    
    class Devise::ConfirmationsController < DeviseController
  # GET /resource/confirmation/new
  def new
    self.resource = resource_class.new
  end
    
        def unlock_instructions(record, token, opts={})
      @token = token
      devise_mail(record, :unlock_instructions, opts)
    end
    
    module Devise
  module Controllers
    # Create url helpers to be used with resource/scope configuration. Acts as
    # proxies to the generated routes created by devise.
    # Resource param can be a string or symbol, a class, or an instance object.
    # Example using a :user resource:
    #
    #   new_session_path(:user)      => new_user_session_path
    #   session_path(:user)          => user_session_path
    #   destroy_session_path(:user)  => destroy_user_session_path
    #
    #   new_password_path(:user)     => new_user_password_path
    #   password_path(:user)         => user_password_path
    #   edit_password_path(:user)    => edit_user_password_path
    #
    #   new_confirmation_path(:user) => new_user_confirmation_path
    #   confirmation_path(:user)     => user_confirmation_path
    #
    # Those helpers are included by default to ActionController::Base.
    #
    # In case you want to add such helpers to another class, you can do
    # that as long as this new class includes both url_helpers and
    # mounted_helpers. Example:
    #
    #     include Rails.application.routes.url_helpers
    #     include Rails.application.routes.mounted_helpers
    #
    module UrlHelpers
      def self.remove_helpers!
        self.instance_methods.map(&:to_s).grep(/_(url|path)$/).each do |method|
          remove_method method
        end
      end
    
      def test_commandline
    commandline = 'echo quux\n'
    Open3.popen3(commandline) {|i,o,e,t|
      assert_equal('quux\n', o.read)
    }
  end
    
    load_extension('data')
    
        it 'coerces the pid to an Integer' do
      pid1 = Process.spawn(ruby_cmd('exit'))
      Process.wait(mock_int(pid1)).should == pid1
      lambda { Process.kill(0, pid1) }.should raise_error(Errno::ESRCH)
    end
    
        output = @ui.output.split '\n'
    assert_equal '  Successfully built RubyGem', output.shift
    assert_equal '  Name: some_gem', output.shift
    assert_equal '  Version: 2', output.shift
    assert_equal '  File: some_gem-2.gem', output.shift
    assert_equal [], output
    
            Tempfile.create('test_webrick_auth') {|tmpfile|
          tmpfile.close
          tmp_pass = WEBrick::HTTPAuth::Htpasswd.new(tmpfile.path, password_hash: hash_algo)
          tmp_pass.set_passwd(realm, 'webrick', 'supersecretpassword')
          tmp_pass.set_passwd(realm, 'foo', 'supersecretpassword')
          tmp_pass.flush
    }
    
        with_tmpchdir do
      write_file('test-script', '$0 = 'hello world'; /test-script/ =~ Process.argv0 or $0 = 'Process.argv0 changed!'; sleep 60')
    
            unless password_matches
          error('%s: password unmatch.', userid)
          challenge(req, res)
        end
        info('%s: authentication succeeded.', userid)
        req.user = userid
      end
    
    $srcdir ||= nil
$exported = nil if ($exported ||= nil) == ''
$archname = nil if ($archname ||= nil) == ''
$keep_temp ||= nil
$patch_file ||= nil
$packages ||= nil
$digests ||= nil
$s3 ||= nil
$tooldir = File.expand_path('..', __FILE__)
$unicode_version = nil if ($unicode_version ||= nil) == ''
$colorize = Colorize.new
    
      #
  # Compares this object and +other+ for equality.  An OpenStruct is eql? to
  # +other+ when +other+ is an OpenStruct and the two objects' Hash tables are
  # eql?.
  #
  def eql?(other)
    return false unless other.kind_of?(OpenStruct)
    @table.eql?(other.table!)
  end
    
    def each_schema_load_environment
  # If we're in development, also run this for the test environment.
  # This is a somewhat hacky way to do this, so here's why:
  # 1. We have to define this before we load the schema, or we won't
  #    have a timestamp_id function when we get to it in the schema.
  # 2. db:setup calls db:schema:load_if_ruby, which calls
  #    db:schema:load, which we define above as having a prerequisite
  #    of this task.
  # 3. db:schema:load ends up running
  #    ActiveRecord::Tasks::DatabaseTasks.load_schema_current, which
  #    calls a private method `each_current_configuration`, which
  #    explicitly also does the loading for the `test` environment
  #    if the current environment is `development`, so we end up
  #    needing to do the same, and we can't even use the same method
  #    to do it.
    
    class DigestMailerWorker
  include Sidekiq::Worker
    
        if extension_pathname.readable?
      ENV['BUNDLE_GEMFILE'] = extension_pathname.to_path
      break
    end
  end
end
    
    sock = TCPSocket.new(ip, port)
    
    		self.block[-1][-1] = block[-1][-1].ljust(SIZE2)
		self.block[-1][-1] << '  */'
	end
    
              render 'admins/pods'
        end
        format.mobile { render 'admins/pods' }
        format.json { render json: pods_json }
      end
    end
    
          # Create an Atom-feed for each index.
      feed = CategoryFeed.new(self, self.source, category_dir, category)
      feed.render(self.layouts, site_payload)
      feed.write(self.dest)
      # Record the fact that this page has been added, otherwise Site::cleanup will remove it.
      self.pages << feed
    end
    
      class IncludeArrayTag < Liquid::Tag
    Syntax = /(#{Liquid::QuotedFragment}+)/
    def initialize(tag_name, markup, tokens)
      if markup =~ Syntax
        @array_name = $1
      else
        raise SyntaxError.new('Error in tag 'include_array' - Valid syntax: include_array [array from _config.yml]')
      end
    
      # Summary is used on the Archive pages to return the first block of content from a post.
  def summary(input)
    if input.index(/\n\n/)
      input.split(/\n\n/)[0]
    else
      input
    end
  end
    
    module Jekyll
    
        def initialize(tag_name, markup, tokens)
      @videos = markup.scan(/((https?:\/\/|\/)\S+\.(webm|ogv|mp4)\S*)/i).map(&:first).compact
      @poster = markup.scan(/((https?:\/\/|\/)\S+\.(png|gif|jpe?g)\S*)/i).map(&:first).compact.first
      @sizes  = markup.scan(/\s(\d\S+)/i).map(&:first).compact
      super
    end
    
    module LogStash
  module Api
    module Commands
      module System
        class Plugins < Commands::Base
          def run
            { :total => plugins.count, :plugins => plugins }
          end
    
      def _nt_double_quoted_string
    start_index = index
    if node_cache[:double_quoted_string].has_key?(index)
      cached = node_cache[:double_quoted_string][index]
      if cached
        cached = SyntaxNode.new(input, index...(index + 1)) if cached == true
        @index = cached.interval.end
      end
      return cached
    end