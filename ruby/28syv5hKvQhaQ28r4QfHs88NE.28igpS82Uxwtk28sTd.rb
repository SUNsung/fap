
        
              https://pip.readthedocs.org/en/stable/installing/#install-pip
    EOS
  when 'pil' then <<-EOS.undent
    Instead of PIL, consider `pip install pillow` or `brew install Homebrew/python/pillow`.
    EOS
  when 'macruby' then <<-EOS.undent
    MacRuby works better when you install their package:
      http://www.macruby.org/
    EOS
  when /(lib)?lzma/
    'lzma is now part of the xz formula.'
  when 'xcode'
    if MacOS.version >= :lion
      <<-EOS.undent
      Xcode can be installed from the App Store.
      EOS
    else
      <<-EOS.undent
      Xcode can be installed from https://developer.apple.com/xcode/downloads/
      EOS
    end
  when 'gtest', 'googletest', 'google-test' then <<-EOS.undent
    Installing gtest system-wide is not recommended; it should be vendored
    in your projects that use it.
    EOS
  when 'gmock', 'googlemock', 'google-mock' then <<-EOS.undent
    Installing gmock system-wide is not recommended; it should be vendored
    in your projects that use it.
    EOS
  when 'sshpass' then <<-EOS.undent
    We won't add sshpass because it makes it too easy for novice SSH users to
    ruin SSH's security.
    EOS
  when 'gsutil' then <<-EOS.undent
    Install gsutil with `pip install gsutil`
    EOS
  when 'clojure' then <<-EOS.undent
    Clojure isn't really a program but a library managed as part of a
    project and Leiningen is the user interface to that library.
    
    module BuildEnvironmentDSL
  def env(*settings)
    @env ||= BuildEnvironment.new
    @env.merge(settings)
  end
end
    
        def self.cleanup_lockfiles
      return unless HOMEBREW_CACHE_FORMULA.directory?
      candidates = HOMEBREW_CACHE_FORMULA.children
      lockfiles  = candidates.select { |f| f.file? && f.extname == '.brewing' }
      lockfiles.each do |file|
        next unless file.readable?
        file.open.flock(File::LOCK_EX | File::LOCK_NB) && file.unlink
      end
    end
    
        if $stdout.tty?
      metacharacters = %w[\\ | ( ) [ ] { } ^ $ * + ? .]
      bad_regex = metacharacters.any? do |char|
        ARGV.any? do |arg|
          arg.include?(char) && !arg.start_with?('/')
        end
      end
      if ARGV.any? && bad_regex
        ohai 'Did you mean to perform a regular expression search?'
        ohai 'Surround your query with /slashes/ to search by regex.'
      end
    end
    
    html_readme = '<html>#{Kramdown::Document.new(open('README.md').read).to_html}</html>'
readme_doctree = REXML::Document.new(html_readme)
links = REXML::XPath.match(readme_doctree, '//a')
    
      included do
    include Oauthable
    
      delegate :form_configurable_attributes, to: :class
  delegate :form_configurable_fields, to: :class
    
        valid_oauth_providers :tumblr
  end
    
      def test_strftime_ctrlchar
    # [ruby-dev:37160]
    t2000 = get_t2000
    assert_equal('\t', t2000.strftime('%t'))
    assert_equal('\t', t2000.strftime('%0t'))
    assert_equal('\t', t2000.strftime('%1t'))
    assert_equal('  \t', t2000.strftime('%3t'))
    assert_equal('00\t', t2000.strftime('%03t'))
    assert_equal('\n', t2000.strftime('%n'))
    assert_equal('\n', t2000.strftime('%0n'))
    assert_equal('\n', t2000.strftime('%1n'))
    assert_equal('  \n', t2000.strftime('%3n'))
    assert_equal('00\n', t2000.strftime('%03n'))
  end
    
      it 'ignores NULL bytes between directives' do
    '\x01\x02'.unpack('U\x00U').should == [1, 2]
  end
    
      # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/favourite
  def favourite
    f = Favourite.last
    NotificationMailer.favourite(f.status.account, Notification.find_by(activity: f))
  end
    
          ::Sass.load_paths << stylesheets_path
    
        def silence_log
      @silence = true
      yield
    ensure
      @silence = false
    end
  end
end

    
      def test_image_helper
    assert_match %r(url\(['']?/assets/apple-touch-icon-144-precomposed.*png['']?\)), @css
  end
    
            def failure_message_when_negated
          'Attachment #{@attachment_name} cannot be between #{@low} and #{@high} bytes'
        end
        alias negative_failure_message failure_message_when_negated
    
    module Paperclip
  class << self
    attr_writer :registered_attachments_styles_path
    def registered_attachments_styles_path
      @registered_attachments_styles_path ||= Rails.root.join('public/system/paperclip_attachments.yml').to_s
    end
  end
    
        ::Paperclip::REQUIRED_VALIDATORS = [AttachmentFileNameValidator, AttachmentContentTypeValidator, AttachmentFileTypeIgnoranceValidator]