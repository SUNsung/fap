
        
          </body>
</html>
HTML
CONTENT_NOT_CONTAINING = <<-HTML.freeze
<!DOCTYPE HTML>
<html lang='en-US'>
  <head>
<meta http-equiv='Content-Type' content='text/html; charset=UTF-8'>
    <meta charset='UTF-8'>
    <title>Jemoji</title>
    <meta name='viewport' content='width=device-width,initial-scale=1'>
    <link rel='stylesheet' href='/css/screen.css'>
  </head>
  <body class='wrap'>
    <p><img class='emoji' title=':+1:' alt=':+1:' src='https://assets.github.com/images/icons/emoji/unicode/1f44d.png' height='20' width='20' align='absmiddle'></p>
    
        # The entry filter for this collection.
    # Creates an instance of Jekyll::EntryFilter.
    #
    # Returns the instance of Jekyll::EntryFilter for this collection.
    def entry_filter
      @entry_filter ||= Jekyll::EntryFilter.new(site, relative_directory)
    end
    
    module Jekyll
  module Commands
    class Build < Command
      class << self
        # Create the Mercenary command for the Jekyll CLI for this Command
        def init_with_program(prog)
          prog.command(:build) do |c|
            c.syntax      'build [options]'
            c.description 'Build your site'
            c.alias :b
    
            private
    
          def valid_processors
        %w(kramdown) + third_party_processors
      end
    
          def convert(content)
        document = Kramdown::Document.new(content, @config)
        html_output = document.to_html.chomp
        if @config['show_warnings']
          document.warnings.each do |warning|
            Jekyll.logger.warn 'Kramdown warning:', warning.sub(%r!^Warning:\s+!, '')
          end
        end
        html_output
      end
    end
  end
end

    
          def fallback_data
        @fallback_data ||= {}
      end
    end
  end
end

    
          def short_month
        @obj.date.strftime('%b')
      end
    
              if entry.end_with?('/')
            entry_path.in_path?(
              item
            )
    
      # SecureRandom.hex generates a random hexadecimal string.
  #
  # The argument _n_ specifies the length, in bytes, of the random number to be generated.
  # The length of the resulting hexadecimal string is twice of _n_.
  #
  # If _n_ is not specified or is nil, 16 is assumed.
  # It may be larger in the future.
  #
  # The result may contain 0-9 and a-f.
  #
  #   require 'securerandom'
  #
  #   SecureRandom.hex #=> 'eb693ec8252cd630102fd0d0fb7c3485'
  #   SecureRandom.hex #=> '91dc3bfb4de5b11d029d376634589b61'
  #
  # If a secure random number generator is not available,
  # +NotImplementedError+ is raised.
  def hex(n=nil)
    random_bytes(n).unpack('H*')[0]
  end
    
      def test_pty_check_raise
    bug2642 = '[ruby-dev:44600]'
    st1 = st2 = pid = nil
    PTY.spawn('cat') do |r,w,id|
      pid = id
      assert_nothing_raised(PTY::ChildExited, bug2642) {st1 = PTY.check(pid, true)}
      w.close
      r.close
      sleep(0.1)
      st2 = assert_raise(PTY::ChildExited, bug2642) {PTY.check(pid, true)}.status
    end
  rescue RuntimeError
    skip $!
  else
    assert_nil(st1)
    assert_equal(pid, st2.pid)
  end
    
          it 'does not keep buffer content if it is longer than offset + result' do
        n = [ 65, 66, 67 ]
        buffer = '1234567890'
        n.pack('@3ccc', buffer: buffer).should == '123ABC'
      end
    end
  end
end

    
      it 'does not modify a HOME string argument' do
    str = '~/a'
    File.expand_path(str).should == '#{Dir.home}/a'
    str.should == '~/a'
  end
    
      # For this test we delete the file first to reset the perms
  it 'opens the file when passed mode, num, permissions and block' do
    rm_r @file
    File.umask(0022)
    File.open(@file, 'w', 0755){ |fh| }
    platform_is_not :windows do
      File.stat(@file).mode.to_s(8).should == '100755'
    end
    File.exist?(@file).should == true
  end
    
        File.pipe?(filename).should == false
    
    describe 'String#upcase' do
  it 'returns a copy of self with all lowercase letters upcased' do
    'Hello'.upcase.should == 'HELLO'
    'hello'.upcase.should == 'HELLO'
  end
    
        res = Net::HTTPServerError.new('1.0', '5xx', 'test response')
    res.error_type.should == Net::HTTPFatalError
  end
end

    
      def icon
    object.image
  end
    
      # Preview this email at http://localhost:3000/rails/mailers/notification_mailer/favourite
  def favourite
    f = Favourite.last
    NotificationMailer.favourite(f.status.account, Notification.find_by(activity: f))
  end