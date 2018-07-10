
        
            options[:only_patterns] = [
      /\Alanguage\./,
      /\Aclass\./,
      /\Afunctions?\./,
      /\Acontrol-structures/,
      /\Aregexp\./,
      /\Areserved\.exceptions/,
      /\Areserved\.interfaces/,
      /\Areserved\.variables/]
    
        def initialize
      @pages = {}
    end
    
        def scoped_accounts
      Account.unscoped.tap do |scope|
        scope.merge! with_usernames
        scope.merge! matching_username
        scope.merge! matching_domain
      end
    end
    
    class ActivityPub::EmojiSerializer < ActiveModel::Serializer
  include RoutingHelper
    
    def codepoints_to_unicode(codepoints)
  if codepoints.include?(' ')
    codepoints.split(' ').map(&:hex).pack('U*')
  else
    [codepoints.hex].pack('U')
  end
end
    
            user.update(last_sign_in_at: 'Tue, 04 Jul 2017 14:45:56 UTC +00:00', current_sign_in_at: 'Wed, 05 Jul 2017 22:10:52 UTC +00:00')
    
    desc 'Start a dummy (test) Rails app server'
task :dummy_rails do
  require 'rack'
  require 'term/ansicolor'
  port = ENV['PORT'] || 9292
  puts %Q(Starting on #{Term::ANSIColor.cyan 'http://localhost:#{port}'})
  Rack::Server.start(
    config: 'test/dummy_rails/config.ru',
    Port: port)
end