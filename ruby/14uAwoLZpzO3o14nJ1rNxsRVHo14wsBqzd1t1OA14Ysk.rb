
        
              if options[:skip_helpers] == true
        @used_helpers = @used_routes
      elsif skip = options[:skip_helpers]
        @used_helpers = self.routes - Array(skip).map(&singularizer)
      else
        @used_helpers = self.routes
      end
    end
  end
end

    
          if failed_attributes.any?
        fail Devise::Models::MissingAttribute.new(failed_attributes)
      end
    end
    
    module Devise
  module Models
    # Timeoutable takes care of verifying whether a user session has already
    # expired or not. When a session expires after the configured time, the user
    # will be asked for credentials again, it means, they will be redirected
    # to the sign in page.
    #
    # == Options
    #
    # Timeoutable adds the following options to devise_for:
    #
    #   * +timeout_in+: the interval to timeout the user session without activity.
    #
    # == Examples
    #
    #   user.timedout?(30.minutes.ago)
    #
    module Timeoutable
      extend ActiveSupport::Concern
    
    blk = block_get{11}
test_ok(blk.class == Proc)
test_ok(blk.to_proc.class == Proc)
test_ok(blk.clone.call == 11)
test_ok(block_get(&blk).class == Proc)
    
          if t > 0.0 and t < isect.t then
        isect.t = t
        isect.hit = true
        isect.pl = Vec.new(ray.org.x + ray.dir.x * t,
                          ray.org.y + ray.dir.y * t,
                          ray.org.z + ray.dir.z * t)
        n = isect.pl.vsub(@center)
        isect.n = n.vnormalize
      else
        0.0
      end
    end
    nil
  end
end
    
    def piece(n, a, nb)
  nb.each{|x|
    a[n] = x
    if n == NP-1
      $p << [a.sort]
    else
      nbc=nb.dup
      [-ROW, -1, 1, ROW].each{|d|
        if x+d > 0 and not a.include?(x+d) and not nbc.include?(x+d)
          nbc << x+d
        end
      }
      nbc.delete x
      piece(n+1,a[0..n],nbc)
    end
  }
end
    
        system_command '#{staged_path}/AdobePatchInstaller.app/Contents/MacOS/AdobePatchInstaller',
                   args: [
                           '--mode=silent',
                         ],
                   sudo: true
  end
    
      gem.required_ruby_version = '>= 2.0'
  gem.add_dependency 'airbrussh', '>= 1.0.0'
  gem.add_dependency 'i18n'
  gem.add_dependency 'rake', '>= 10.0.0'
  gem.add_dependency 'sshkit', '>= 1.9.0'
    
    Given(/^(\d+) valid existing releases$/) do |num|
  a_day = 86_400 # in seconds
  offset = -(a_day * num.to_i)
  num.to_i.times do
    run_vagrant_command('mkdir -p #{TestApp.release_path(TestApp.timestamp(offset))}')
    offset += a_day
  end
end
    
      def exists?(type, path)
    %Q{[ -#{type} '#{path}' ]}
  end
    
          def set(key, value=nil, &block)
        @trusted_keys << key if trusted? && !@trusted_keys.include?(key)
        remember_location(key)
        values[key] = block || value
        trace_set(key)
        values[key]
      end
    
    @@ layout
<html>
  <head>
    <title>Super Simple Chat with Sinatra</title>
    <meta charset='utf-8' />
    <script src='http://ajax.googleapis.com/ajax/libs/jquery/1/jquery.min.js'></script>
  </head>
  <body><%= yield %></body>
</html>
    
    class Rack::Builder
  include Sinatra::Delegator
end

    
            elsif masked_token?(token)
          token = unmask_token(token)
    
        class << self
      def jobs # :nodoc:
        Queues.jobs_by_queue.values.flatten
      end
    
    # Example for adding special attributes
package.attributes[:deb_group] = 'super-useful'
package.attributes[:rpm_group] = 'super-useful'
    
        return [osname, osversion, arch, wordsize].join(':')
  end
    
        platforms.each do |platform|
      logger.info('Generating service manifest.', :platform => platform.class.name)
      platform.program = command.first
      platform.name = attributes[:pleaserun_name]
      platform.args = command[1..-1]
      platform.description = if attributes[:description_given?]
        attributes[:description]
      else
        platform.name
      end
      pleaserun_attributes.each do |attribute_name|
        attribute = 'pleaserun_#{attribute_name}'.to_sym
        if attributes.has_key?(attribute) and not attributes[attribute].nil?
          platform.send('#{attribute_name}=', attributes[attribute])
        end
      end
    
      option '--downcase-name', :flag, 'Should the target package name be in ' \
    'lowercase?', :default => true
  option '--downcase-dependencies', :flag, 'Should the package dependencies ' \
    'be in lowercase?', :default => true
    
      def architecture
    case @architecture
    when nil, 'native'
      @architecture = %x{uname -p}.chomp
    end
    # 'all' is a valid arch according to
    # http://www.bolthole.com/solaris/makeapackage.html