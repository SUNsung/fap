
        
            if resource.errors.empty?
      resource.unlock_access! if unlockable?(resource)
      if Devise.sign_in_after_reset_password
        flash_message = resource.active_for_authentication? ? :updated : :updated_not_active
        set_flash_message!(:notice, flash_message)
        sign_in(resource_name, resource)
      else
        set_flash_message!(:notice, :updated_not_active)
      end
      respond_with resource, location: after_resetting_password_path_for(resource)
    else
      set_minimum_password_length
      respond_with resource
    end
  end
    
    if defined?(ActionMailer)
  class Devise::Mailer < Devise.parent_mailer.constantize
    include Devise::Mailers::Helpers
    
          protected
    
      if record && record.respond_to?(:timedout?) && warden.authenticated?(scope) &&
     options[:store] != false && !env['devise.skip_timeoutable']
    last_request_at = warden.session(scope)['last_request_at']
    
            name
      end
    
        options[:fix_urls] = ->(url) do
      url.sub! %r{(#{Rust.base_url}.+/)\z}, '\1index.html'
      url.sub! '/unicode/u_str', '/unicode/str/'
      url
    end
    
        version 'C++' do
      include MultipleBaseUrls
      self.base_urls = ['https://www.tensorflow.org/api_docs/cc/', 'https://www.tensorflow.org/api_guides/cc/']
    end
    
            css('p > code:first-child:last-child', 'td > code:first-child:last-child').each do |node|
          next if node.previous.try(:content).present? || node.next.try(:content).present?
          node.inner_html = node.inner_html.squish.gsub(/<br(\ \/)?>\s*/, '\n')
          node.content = node.content.strip
          node.name = 'pre' if node.content =~ /\s/
          node.parent.before(node.parent.children).remove if node.parent.name == 'p'
        end
    
        def paragraphize(input)
      '<p>#{input.lstrip.rstrip.gsub(/\n\n/, '</p><p>').gsub(/\n/, '<br/>')}</p>'
    end
  end
end
    
        def render(context)
      if @img
        '<img #{@img.collect {|k,v| '#{k}=\'#{v}\'' if v}.join(' ')}>'
      else
        'Error processing input, expected syntax: {% img [class name(s)] [http[s]:/]/path/to/image [width [height]] [title text | \'title text\' [\'alt text\']] %}'
      end
    end
  end
end
    
      public(:input)
end # class FPM::Package::NPM

    
      # Returns path of a processed template PackageInfo given to 'pkgbuild --info'
  # note: '--info' is undocumented:
  # http://managingosx.wordpress.com/2012/07/05/stupid-tricks-with-pkgbuild
  def pkginfo_template_path
    pkginfo_template = Tempfile.open('fpm-PackageInfo')
    pkginfo_data = template('osxpkg.erb').result(binding)
    pkginfo_template.write(pkginfo_data)
    pkginfo_template.close
    pkginfo_template.path
  end # def write_pkginfo_template
    
      option '--zonetype', 'ZONETYPE',
    'Set the allowed zone types (global, nonglobal, both)',
    :default => 'value=global value=nonglobal' do |value|
      case @value
      when 'both'
        value = 'value=global value=nonglobal'
      else
        value = 'value=#{value}'
      end
    end # value
    
      # Helper for group lookup
  def gid2group(gid)
    begin
      grent = Etc.getgrgid(gid)
      return grent.name
    rescue ArgumentError => e
      # Invalid user id? No user? Return the uid.
      logger.warn('Failed to find group for gid #{gid}')
      return gid.to_s
    end
  end # def uid2user
end # class FPM::Target::Puppet
    
      # Where we keep metadata and post install scripts and such
  def fpm_meta_path
    @fpm_meta_path ||= begin
                         path = File.join(staging_path, '.fpm')
                         FileUtils.mkdir_p(path)
                         path
                       end
  end
end
