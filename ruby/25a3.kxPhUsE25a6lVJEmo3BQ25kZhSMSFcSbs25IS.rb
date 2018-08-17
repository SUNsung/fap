
        
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
    
              theme.create!
          Jekyll.logger.info 'Your new Jekyll theme, #{theme.name.cyan},' \
                             ' is ready for you in #{theme.path.to_s.cyan}!'
          Jekyll.logger.info 'For help getting started, read #{theme.path}/README.md.'
        end
        # rubocop:enable Metrics/AbcSize
      end
    end
  end
end

    
    module Jekyll
  class EntryFilter
    attr_reader :site
    SPECIAL_LEADING_CHARACTERS = [
      '.', '_', '#', '~',
    ].freeze
    
        version '1.6' do
      self.release = '1.6.5'
      self.base_urls = [
        'https://hexdocs.pm/elixir/#{release}/',
        'https://hexdocs.pm/eex/#{release}/',
        'https://hexdocs.pm/ex_unit/#{release}/',
        'https://hexdocs.pm/iex/#{release}/',
        'https://hexdocs.pm/logger/#{release}/',
        'https://hexdocs.pm/mix/#{release}/',
        'https://elixir-lang.org/getting-started/'
      ]
    end
    
        options[:attribution] = <<-HTML
      &copy; 2018 The TensorFlow Authors. All rights reserved.<br>
      Licensed under the Creative Commons Attribution License 3.0.<br>
      Code samples licensed under the Apache 2.0 License.
    HTML
    
    module Docs
  class PageDb
    attr_reader :pages
    
      before :all do
    begin
      leaked = Process.waitall
      puts 'leaked before wait specs: #{leaked}' unless leaked.empty?
      with_feature :mjit do
        # Ruby-space should not see PIDs used by mjit
        leaked.should be_empty
      end
    rescue NotImplementedError
    end
  end
    
    if defined?(OpenSSL::SSL) then
  require 'rubygems/security/policy'
  require 'rubygems/security/policies'
  require 'rubygems/security/trust_dir'
end
    
        assert_equal %w[rdoc], @cmd.options[:document]
    
        if block_given?
      begin
        yield path
      ensure
        FileUtils.remove_entry_secure path
      end
    else
      path
    end
  end
end
    
        locked = false
    thread = Thread.new do
      Thread.current.abort_on_exception = false
      mutex.synchronize do
        assert_raise(Interrupt) {
          condvar.wait(mutex)
        }
        locked = mutex.locked?
      end
    end