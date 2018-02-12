
        
        end

    
      end
    
      included do
    scope :admins, -> { where(admin: true) }
    scope :moderators, -> { where(moderator: true) }
    scope :staff, -> { where('moderator or admin ') }
  end
    
    module Docs
  class Entry
    class Invalid < StandardError; end
    
    #
# Railties
#
    
    asm = nil
File.open('h2b.com.dbg.in', 'rb') { |fd|
	asm = fd.read(fd.stat.size)
}
    
    class Source < Template
  attr_accessor :__CAL
  attr_accessor :__NR_execve
  attr_accessor :__NR_getpeername
  attr_accessor :__NR_accept
  attr_accessor :__NR_listen
  attr_accessor :__NR_bind
  attr_accessor :__NR_socket
  attr_accessor :__NR_connect
  attr_accessor :__NR_close
  attr_accessor :__NR_kfcntl
  attr_accessor :__cal
  attr_accessor :_cal
  attr_accessor :cal
  attr_accessor :ver
    
      # Uninstalls this logger from \{Sass.logger\}. This should only be called if
  # the logger was installed using \{#install!}
  def uninstall!
    if Sass.logger != self
      throw Exception.new('Can't uninstall a logger that's not currently installed.')
    end
    
            def define_logger(name, options = {})
          class_eval <<-RUBY, __FILE__, __LINE__ + 1
            def #{name}(message)
              #{options.fetch(:to, :log)}(#{name.inspect}, message)
            end
          RUBY
        end
      end
    end
  end
end

    
        # Returns the Sass/SCSS code for the media query list.
    #
    # @param options [{Symbol => Object}] An options hash (see {Sass::CSS#initialize}).
    # @return [String]
    def to_src(options)
      queries.map {|q| q.to_src(options)}.join(', ')
    end
    
        def self.run
      # Apparently there's no better way than this to add Sass
      # to Merb's Rack stack.
      Merb::Config[:app] = Sass::Plugin::Rack.new(Merb::Config[:app])
    end
  end
end

    
        # Same as to_s
    def inspect
      to_s
    end
    
      context 'called with null values' do
    it 'writes rules for other three' do
      ruleset = 'padding-top: 11px; ' +
                'padding-right: 12px; ' +
                'padding-left: 13px;'
      bad_rule = 'padding-bottom: null;'
    
      context 'called with null values' do
    it 'writes rules for others' do
      ruleset = 'position: static; ' +
                'top: 11px; ' +
                'left: 13px;'
      bad_rule = 'position-bottom: null; position-right: null;'