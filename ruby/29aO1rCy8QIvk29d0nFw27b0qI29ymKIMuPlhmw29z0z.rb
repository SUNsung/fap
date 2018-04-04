
        
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
    
      # Clean the keg of formula @f
  def clean
    ObserverPathnameExtension.reset_counts!
    
        first_warning = true
    methods.each do |method|
      unless checks.respond_to?(method)
        Homebrew.failed = true
        puts 'No check available by the name: #{method}'
        next
      end
    
          renamed_formulae << [old_full_name, new_full_name] if @report[:A].include? new_full_name
    end
    
          expect(response).to redirect_to(settings_notifications_path)
      user.reload
      expect(user.settings['notification_emails']['follow']).to be true
      expect(user.settings['interactions']['must_be_follower']).to be false
    end
  end
end

    
        it 'updates user settings' do
      user.settings['boost_modal'] = false
      user.settings['delete_modal'] = true
    
    #
# This script extracts the forms from the main page of each
# web site in a list. The output of this can be used with
# Metasploit (and other tools) to obtain the saved form data
# of these domains.
#
    
            report_auth_info(s)
        print_status('Successful IMAP Login: #{s[:session]} >> #{s[:user]} / #{s[:pass]} (#{s[:banner].strip})')
    
                unless assignment.run_exclusively_with?(reference)
              assignment.reference!(node)
            end
    
    module RuboCop
  module Cop
    module Style
      # This cop checks against comparing a variable with multiple items, where
      # `Array#include?` could be used instead to avoid code repetition.
      #
      # @example
      #   # bad
      #   a = 'a'
      #   foo if a == 'a' || a == 'b' || a == 'c'
      #
      #   # good
      #   a = 'a'
      #   foo if ['a', 'b', 'c'].include?(a)
      class MultipleComparison < Cop
        MSG = 'Avoid comparing a variable with multiple items ' \
          'in a conditional, use `Array#include?` instead.'.freeze
    
            # Return the plain source code without annotations
        #
        # @return [String]
        def plain_source
          lines.join
        end
    
      def generate_error_hash(error)
    {
      :path => request.path,
      :status => error.status_code,
      :error => error.to_hash
    }
  end