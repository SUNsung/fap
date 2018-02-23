CONTENT_CONTAINING = <<-HTML.freeze
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
    
    def test_dir(*subdirs)
  File.join(TEST_DIR, *subdirs)
end
    
        def process(args)
      arg_is_present? args, '--server', 'The --server command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--serve', 'The --serve command has been replaced by the \
                          'serve' subcommand.'
      arg_is_present? args, '--no-server', 'To build Jekyll without launching a server, \
                          use the 'build' subcommand.'
      arg_is_present? args, '--auto', 'The switch '--auto' has been replaced with \
                          '--watch'.'
      arg_is_present? args, '--no-auto', 'To disable auto-replication, simply leave off \
                          the '--watch' switch.'
      arg_is_present? args, '--pygments', 'The 'pygments'settings has been removed in \
                          favour of 'highlighter'.'
      arg_is_present? args, '--paginate', 'The 'paginate' setting can only be set in \
                          your config files.'
      arg_is_present? args, '--url', 'The 'url' setting can only be set in your \
                          config files.'
      no_subcommand(args)
    end
    
          private
      def grouped_array(groups)
        groups.each_with_object([]) do |item, array|
          array << {
            'name'  => item.first,
            'items' => item.last,
            'size'  => item.last.size,
          }
        end
      end
    end
  end
end

    
        # Gets the path to this layout.
    attr_reader :path
    
        # This setting makes it so that network access from inside the vagrant guest
    # is able to resolve DNS using the hosts VPN connection.
    v.customize ['modifyvm', :id, '--natdnshostresolver1', 'on']
  end
    
      private
    
      def self.register(user, app_id, params, challenges)
    u2f = U2F::U2F.new(app_id)
    registration = self.new
    
      test 'required_fields should contain the fields that Devise uses' do
    assert_equal Devise::Models::Confirmable.required_fields(User), [
      :confirmation_token,
      :confirmed_at,
      :confirmation_sent_at
    ]
  end
    
        # Initialize Warden and copy its configurations.
    config.app_middleware.use Warden::Manager do |config|
      Devise.warden_config = config
    end
    
      def unknown_action!(msg)
    logger.debug '[Devise] #{msg}' if logger
    raise AbstractController::ActionNotFound, msg
  end
    
    gemfile(true) do
  source 'https://rubygems.org'
  # Activate the gem you are reporting the issue against.
  gem 'rails', '~> 4.2.0'
  gem 'devise', '~> 4.0'
  gem 'sqlite3'
  gem 'byebug'
end
    
    puts 'Deduping #{links.size} links...'